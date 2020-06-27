#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

#include "Book.h"

Book::Book(int type, int number, string name, double price, string author, string pubHouse):
        _type(type),
        _number(number),
        _name(name),
        _price(price),
        _author(author),
        _pubHouse(pubHouse)
{}

Book::Book():
        _type(-1),
        _price(0),
        _number(-1),
        _author("undefined"),
        _name("undefined"),
        _pubHouse("undefined")
{}

istream& operator>> (istream& input, Book& b)
{
    int type;
    input >> type;
    // TODO: check type
    int number;
    string name;
    double price;
    string author;
    string pubHouse;

    input >> type
          >> number
          >> quoted(name)
          >> price
          >> quoted(author)
          >> quoted(pubHouse);

    b = Book(type, number, name, price, author, pubHouse);

    return input;
}

ostream& operator<< (ostream& output, const Book& b)
{
    output << b._type
        << " "
        << b._number
        << " "
        << quoted(b._name)
        << " "
        << b._price
        << " "
        << quoted(b._author)
        << " "
        << quoted(b._pubHouse);

    return output;
}

string Book::Serialize() const
{
    ostringstream ss;
    ss << _type << " "
       << _number << " "
       << quoted(_name) << " "
       << _price << " "
       << quoted(_author) << " "
       << quoted(_pubHouse);

    return ss.str();
}

void Book::Deserialize(string rawStr) {
    istringstream ss(rawStr);
    int number;
    string name;
    double price;
    string author;
    string pubHouse;

    ss >> number
       >> quoted(name)
       >> price
       >> quoted(author)
       >> quoted(pubHouse);

    _number = number;
    _name = name;
    _price = price;
    _author = author;
    _pubHouse = pubHouse;
}
