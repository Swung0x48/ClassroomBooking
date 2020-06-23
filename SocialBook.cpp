#include <iostream>
using namespace std;

#include "Books.h"
#include "SocialBook.h"

SocialBook::SocialBook(
    //                  int type,
    int number,
    string name,
    double price,
    string author,
    string pubHouse) :
    Books(
        2,
        number,
        name,
        price,
        author,
        pubHouse)
{}