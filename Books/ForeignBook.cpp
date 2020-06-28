#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

#include "Book.h"
#include "ForeignBook.h"
#include "../Util/Util.h"


ForeignBook::ForeignBook(
    //                  int type,
    int number,
    string name,
    double price,
    string author,
    string pubHouse,
    string language) :
        Book(
        3,
        number,
        name,
        price,
        author,
        pubHouse),
        _language(language)
{}

istream &operator>>(istream &input, ForeignBook &b)
{
    string str;
    getline(input, str);
    b.Deserialize(str);

    return input;
}

ostream &operator<<(ostream &output, ForeignBook b) {
    output << b.Serialize();
    return output;
}

void ForeignBook::Deserialize(string rawStr)
{
    istringstream ss(rawStr);
    int number;
    string name;
    double price;
    string author;
    string pubHouse;
    string language;

    ss >> number
       >> quoted(name)
       >> price
       >> quoted(author)
       >> quoted(pubHouse)
       >> quoted(language);

    _number = number;
    _name = name;
    _price = price;
    _author = author;
    _pubHouse = pubHouse;
    _language = language;
}

string ForeignBook::Serialize()
{
    ostringstream ss;
    ss << _type << " "
       << _number << " "
       << quoted(_name) << " "
       << _price << " "
       << quoted(_author) << " "
       << quoted(_pubHouse) << " "
       << quoted(_language);

    return ss.str();
}

ForeignBook::ForeignBook():
        Book(
                3,
                -1,
                "undefined",
                0,
                "undefined",
                "undefined"),
        _language("undefined")
{}

void ForeignBook::ShowMe() {
    Book::ShowMe();
    cout << "语言： " << _language << endl;
}
