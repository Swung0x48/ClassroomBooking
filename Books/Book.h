#pragma once 
#ifndef BOOKS_H
#define BOOKS_H

using namespace std;
/*using std::string;
using std::ifstream;
using std::ofstream;*/

class Book {
protected:
    int _number;
    string _name;
    double _price;
    string _author;
    string _pubHouse;
    int _type = -1;
    virtual void Deserialize(string rawStr);

public:
    virtual string Serialize();
    Book(int type, int number, string name, double price, string author, string pubHouse);
    Book();

    virtual int GetType() { return _type; }
    int GetNumber() const { return _number; }
    string GetName() { return _name; };
    double GetPrice() { return _price; };
    string GetAuthor() { return _author; };
    string GetPubHouse() { return _pubHouse; };
    virtual void ShowMe();
    friend istream& operator>> (istream& input, Book& b);
    friend ostream& operator<< (ostream& output, Book& b);
    // TODO: Add virtual function delegate.

    bool operator<(const Book& rhs) const
    {
        return _number < rhs._number;
    }
    ~Book();
//    bool operator<(const Book* rhs) const
//    {
//        return this->_number < rhs->_number;
//    }
};

#endif   //BOOKS_H