#include <iostream>
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
        pubHouse)
{
    _language = language;
}