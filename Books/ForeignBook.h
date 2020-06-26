#pragma once 
#ifndef FOREIGNBOOK_H
#define FOREIGNBOOK_H

#include "Book.h"
class ForeignBook :
    public Book
{
private:
    string _language;

public:
    ForeignBook(int number, string name, double price, string author, string pubHouse, string language );
    friend istream& operator>> (istream& input, ForeignBook& b);
    friend ostream& operator<< (ostream& output, const ForeignBook& b);

    //  int GetType() { return _type; }
};

#endif   //FOREIGNBOOK_H

