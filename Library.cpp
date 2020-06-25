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
void Library::ShowAllLogs() { //TODO:

}

//USER
void Library::Lend(int number, int quantity) {
    Book b;
    for (auto item : _stock) {
        if (b.GetNumber() == number) {
            _stock[b] -= quantity;
        }
        //TODO: get borrowtime
    }
}
void Library::Return(int number, int quantity) {
    Book b;
    for (auto item : _stock) {
        if (b.GetNumber() == number) {
            _stock[b]+= quantity;
        }
        //TODO: get returntime
}
Book Library::Search(int number) {   //???
    Book b;
    for (auto item : _stock) {
        if (b.GetNumber() == number) {
            return b;
        }
    }
    throw "BookNotFoundException";
}
int Library::SignIn(string account, string password) {
    User u;
    for (auto item : _userList) {
        if (u.GetAccount() == account && u.GetPassword==password) {
            return u.GetType();
        }
        else if (u.GetAccount() == account && u.GetPassword != password) {
            throw "PasswordNotFoundException";
        }
    }
    throw "UserNotFoundException";
}
User Library::Register(string account, string password) {
    User u;
    SetAccount(account);
    SetPassword(password);
    for (auto item : _userList) {
        if (u.GetAccount() == account ) {
            throw "UserAccountIsUsedException";
        }
    }
    return u;
}
vector<Log> Library::QueryLog(string account) {
    vector<Log> result;
    Log l;
    for (auto item : _logList) {
        if (l.GetAccount() == account) {
            result.insert(result.end(), l);
        }
    }
    return result;
}

ostream &operator<<(ostream &output, const map<Book, int>& stock)
{
    for (const auto& item: stock)
    {
        Book bookItem(item.first);
        output << item.second << " " << bookItem;
    }
    return output;
}
