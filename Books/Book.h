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

protected:
    int _type = 0;

public:
    Book(int type, int number, string name, double price, string author, string pubHouse);
    Book();
    int GetType() { return _type; }
    int GetNumber() const { return _number; }
    string GetName() { return _name; };
    double GetPrice() { return _price; };
    string GetAuthor() { return _author; };
    string GetPubHouse() { return _pubHouse; };
    friend istream& operator>> (istream& input, Book& b);
    friend ostream& operator<< (ostream& output, Book& b);

    bool operator<(const Book& rhs) const
    {
        return _number < rhs._number;
    }
};

#endif   //BOOKS_H