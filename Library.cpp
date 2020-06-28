#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <algorithm>
#include "Books/Book.h"
#include "Library.h"

using namespace std;

//ADMIN
void Library::AddBook(Book* book, int quantity)//addquantity
{
    try
    {
        Book *pBook = Search(book->GetNumber());
        _stock[pBook] += quantity;
    }
    catch (const char* c)
    {
        _stock[book] += quantity;
    }
}
// tested
int Library::Statistics(int type) {
    int sum=0;
    if (type == 1 || type == 2 || type == 3) {
        for (auto item : _stock)
        {
            if (item.first->GetType() == type)
            {
                sum += item.second;
            }
        }
        return sum;
    }
    else {
        throw "TypeNotFoundException";
    }
}
// tested
void Library::ShowAllLogs()
{
    for (const auto& item: _logList)
    {
        cout << item << endl;
    }
}

//USER
void Library::Lend(string borrower, int number, int quantity)
{
    for (auto item : _stock)
    {
        if (item.first->GetNumber() == number)
        {
            if (quantity > item.second)
            {
                throw "NotEnoughInStockException";
            }
            _stock[item.first] -= quantity;
            _logList.emplace_back(borrower, number, quantity);
            return;
        }
    }
}
//TODO: borrowtime
void Library::Return(string borrower, int number, int quantity)
{
//    for (auto item : _stock)
//    {
//        if (item.first->GetNumber() == number) {
//            _stock[item.first] += quantity;
//        }
//    }
    try
    {
        Book* book = Search(number);

        for (auto item: _logList)
        {
            if (item.GetBorrower() == borrower)
            {
                if (item.GetBookNumber() == number)
                {
                    _stock[book] += quantity;
                    item.SetQuantity(item.GetQuantity() - quantity);
                }
                else
                {
                    continue;
                }
            }
            else
            {
                continue;
            }
        }
    }
    catch (const char * c)
    {
        throw c;
    }
}
//TODO:returntime
Book* Library::Search(int number)
{
    for (auto item : _stock)
    {
        if (item.first->GetNumber() == number)
        {
            return item.first;
        }
    }
    throw "BookNotFoundException";
}
//tested
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
//tested
User Library::Register(string account, string password) {
    for (auto item : _userList) {
        if (item.GetAccount() == account ) {
            throw "UserAccountIsUsedException";
        }
    }
    User u(account, password, 1);
    return u;
}
//tested
vector<Log> Library::QueryLog(string account) {
    vector<Log> result;
    for (auto item : _logList) {
        if (item.GetBorrower() == account) {
            result.push_back(item);
        }
    }
    return result;
}
//tested
Library::~Library()
{

}

//ostream &operator<<(ostream &output, const map<Book, int>& stock)
//{
//    for (const auto& item: stock)
//    {
//        Book bookItem(item.first);
//        output << item.second << " " << bookItem << endl;
//    }
//    return output;
//}
//
//ostream &operator<<(ostream &output, const vector<User> &userList)
//{
//    for (const auto& item: userList)
//    {
//        output << userList << endl;
//    }
//    return output;
//}
//
//ostream &operator<<(ostream &output, const vector<Log> &logList) {
//    for (const auto& item: logList)
//    {
//        output << logList << endl;
//    }
//    return output;
//}
//
//istream &operator>>(istream &input, const map<Book, int>& stock)
//{
//
//}

