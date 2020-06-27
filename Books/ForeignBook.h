#pragma once 
#ifndef FOREIGNBOOK_H
#define FOREIGNBOOK_H

#include "Book.h"
class ForeignBook :
    public Book
{
protected:
    string _language;
    virtual void Deserialize(string rawStr);

public:

    virtual string Serialize() const;
    ForeignBook();
    ForeignBook(int number, string name, double price, string author, string pubHouse, string language);

    virtual void ShowMe();
    friend istream& operator>> (istream& input, ForeignBook& b);
    friend ostream& operator<< (ostream& output, const ForeignBook& b);

    virtual int GetType() { return _type; }
};

#endif   //FOREIGNBOOK_H

