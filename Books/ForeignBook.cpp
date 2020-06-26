#include <iostream>
#include <iomanip>

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
    int type;
    int number;
    string name;
    double price;
    string author;
    string pubHouse;
    string language;

    input >> type
          >> number
          >> quoted(name)
          >> price
          >> quoted(author)
          >> quoted(pubHouse)
          >> quoted(language);

    b = ForeignBook(number, name, price, author, pubHouse, language);

    return input;
}
