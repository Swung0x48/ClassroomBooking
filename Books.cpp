#include <iostream>
using namespace std;

#include "Books.h"


Books::Books(int type, int number, string name, double price, string author, string pubHouse):
        _type(type),
        _number(number),
        _name(name),
        _price(price),
        _author(author),
        _pubHouse(pubHouse)
{
}
