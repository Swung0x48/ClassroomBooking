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



ofstream& operator<< (ofstream& output, int outputInt)
{
    ofstream ofs;
    ofs << outputInt;
}

ifstream& operator>> (ifstream& input, Books& b) {
    input >> b._type
        >> b._number
        >> quoted(b._name)
        >> b._price
        >> quoted(b._author)
        >> b._pubHouse;
    return input;
}

ofstream& operator<< (ofstream& output, Books& b) {
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
