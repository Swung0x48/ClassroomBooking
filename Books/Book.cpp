#include <iostream>
#include <iomanip>
#include <string>
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
        _author(""),
        _name(""),
        _pubHouse("")
{}

istream& operator>> (istream& input, Book& b)
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