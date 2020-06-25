#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include "Books/Book.h"
#include "Library.h"

using namespace std;

//ADMIN
void Library::AddBook(Book &book, int quantity)
{
    _stock[book] += quantity;
}
int Library::Statistics(int type) {
    Book b;
    int sum=0;
    for (auto item : _stock) {
        if (b.GetType() == type) {
            sum += _stock[b];
        }
    }
    return sum;
}
void Library::ShowAllLogs()
{
    for (auto item: _logList)
    {
        cout << item << endl;
    }
}

//USER
void Library::Lend(int number, int quantity) {
    for (auto item : _stock)
    {
        Book book = item.first;
        if (book.GetNumber() == number)
        {
            if (quantity > item.second)
            {
                throw "NotEnoughInStockException";
            }
            _stock[item.first] -= quantity;
        }
        //TODO: get borrowtime
    }
}
void Library::Return(int number, int quantity) {
    Book b;
    for (auto item : _stock) {
        if (b.GetNumber() == number) {
            _stock[b] += quantity;
        }
        //TODO: get returntime
    }
}
Book Library::Search(int number)
{
//    Book b;
    for (auto item : _stock)
    {
//        if (b.GetNumber() == number) {
//            return b;
//        }
        if (item.first.GetNumber() == number)
        {
            return item.first;
        }
    }
    throw "BookNotFoundException";
}

int Library::SignIn(string account, string password) {
    for (auto item : _userList) {
        if (item.GetAccount() == account && item.GetPassword() == password) {
            return item.GetType();
        }
        else if (item.GetAccount() == account && item.GetPassword() != password) {
            throw "PasswordIncorrectException";
        }
    }
    throw "UserNotFoundException";
}
User Library::Register(string account, string password) {
    for (auto item : _userList) {
        if (item.GetAccount() == account ) {
            throw "UserAccountIsUsedException";
        }
    }
    User u(account, password, 1);
    return u;
}
vector<Log> Library::QueryLog(string account) {
    vector<Log> result;
    for (auto item : _logList) {
        if (item.GetAccount() == account) {
            result.push_back(item);
        }
    }
    return result;
}

ostream &operator<<(ostream &output, const map<Book, int>& stock)
{
    for (const auto& item: stock)
    {
        Book bookItem(item.first);
        output << item.second << " " << bookItem << endl;
    }
    return output;
}

ostream &operator<<(ostream &output, const vector<User> &userList)
{
    for (const auto& item: userList)
    {
        output << userList << endl;
    }
    return output;
}

ostream &operator<<(ostream &output, const vector<Log> &logList) {
    for (const auto& item: logList)
    {
        output << logList << endl;
    }
    return output;
}

