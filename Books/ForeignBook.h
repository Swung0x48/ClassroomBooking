#pragma once 
#ifndef FOREIGNBOOK_H
#define FOREIGNBOOK_H

#include "Books.h"
class ForeignBook :
    public Books
{
private:
    string _language;

public:
    ForeignBook(int number, string name, double price, string author, string pubHouse, string language );

    int GetType() { return _type; }
};

#endif   //FOREIGNBOOK_H

