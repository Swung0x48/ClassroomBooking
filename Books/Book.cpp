#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>

using namespace std;

#include "Book.h"

Book::Book(int type, int number, string name, double price, string author, string pubHouse):
        _type(type),
        _number(number),
        _name(name),
        _price(price),
        _author(author),
        _pubHouse(pubHouse)
{}

Book::Book():
        _type(-1),
        _price(0),
        _number(-1),
        _author("undefined"),
        _name("undefined"),
        _pubHouse("undefined")
{}

istream& operator>> (istream& input, Book& b)
{
    b = Book();
    string str;
    getline(input, str);
    b.Deserialize(str);

    return input;
//    int type;
//    // TODO: check type
//    int number;
//    string name;
//    double price;
//    string author;
//    string pubHouse;
//
//    input >> type
//          >> number
//          >> quoted(name)
//          >> price
//          >> quoted(author)
//          >> quoted(pubHouse);
//
//    b._type = type;
//    b._number = number;
//    b._name = name;
//    b._price = price;
//    b._author = author;
//    b._pubHouse = pubHouse;
//
//    return input;
}

ostream& operator<< (ostream& output, const Book& b)
{
    output << b.Serialize();
    return output;
//    output << b._type
//        << " "
//        << b._number
//        << " "
//        << quoted(b._name)
//        << " "
//        << b._price
//        << " "
//        << quoted(b._author)
//        << " "
//        << quoted(b._pubHouse);
//
//    return output;
}

string Book::Serialize() const
{
    ostringstream ss;
    ss << _type << " "
       << _number << " "
       << quoted(_name) << " "
       << _price << " "
       << quoted(_author) << " "
       << quoted(_pubHouse);

    return ss.str();
}

void Book::Deserialize(string rawStr) {
    istringstream ss(rawStr);
    int type;
    int number;
    string name;
    double price;
    string author;
    string pubHouse;

    ss >> type
       >> number
       >> quoted(name)
       >> price
       >> quoted(author)
       >> quoted(pubHouse);

    _type = type;
    _number = number;
    _name = name;
    _price = price;
    _author = author;
    _pubHouse = pubHouse;
}

Book::~Book() {

}

void Book::ShowMe()
{
    cout << "书名： " << _name << endl
         << "编号： " << _number << endl
         << "作者： " << _author << endl
         << "出版社： " << _pubHouse << endl
         << "类型： ";
    if (_type == 1)
    {
        cout << "自然科学";
    }
    else if (_type == 2)
    {
        cout << "人文社科";
    }
    else if (_type == 3)
    {
        cout << "外文";
    }

    cout << endl;
}

