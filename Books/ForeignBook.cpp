#include <iostream>
#include <iomanip>
#include <sstream>

using namespace std;

#include "Book.h"
#include "ForeignBook.h"


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
{

}

istream &operator>>(istream &input, ForeignBook &b)
{
    string str;
    getline(input, str);
    b = b.Create(str);

    return input;
}

ostream &operator<<(ostream &output, const ForeignBook &b) {
    output << b._type << " "
           << b._number << " "
           << quoted(b._name) << " "
           << b._price << " "
           << quoted(b._author) << " "
           << quoted(b._pubHouse) << " "
           << quoted(b._language);
    return output;
    // TODO: Use a virtual function as delegate
}

ForeignBook ForeignBook::Create(string rawStr)
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

    return ForeignBook(number, name, price, author, pubHouse, language);
}
