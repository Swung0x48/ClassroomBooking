#include <iostream>
using namespace std;

#include "Book.h"
#include "SocialBook.h"

SocialBook::SocialBook(
    //                  int type,
    int number,
    string name,
    double price,
    string author,
    string pubHouse) :
        Book(
        2,
        number,
        name,
        price,
        author,
        pubHouse)
{}