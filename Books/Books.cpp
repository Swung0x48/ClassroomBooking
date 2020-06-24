#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

#include "Books.h"

Books::Books(int type, int number, string name, double price, string author, string pubHouse):
        _type(type),
        _number(number),
        _name(name),
        _price(price),
        _author(author),
        _pubHouse(pubHouse)
{}

Books::Books():
        _type(-1),
        _price(0),
        _number(-1),
        _author(""),
        _name(""),
        _pubHouse("")
{}

istream& operator>> (istream& input, Books& b)
{
    int type;
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

    b = Books(type, number, name, price, author, pubHouse);

    return input;
}

ostream& operator<< (ostream& output, Books& b)
{
    output << b._type
        << string(" ")
        << b._number
        << " "
        << quoted(b._name)
        << " "
        << b._price
        << " "
        << quoted(b._author)
        << " "
        << quoted(b._pubHouse)
        << endl;

    return output;
}

