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
    _stock[book] += quantity;
}
//TODO: addbook(variety)
int Library::Statistics(int type) {
    int sum=0;
    for (auto item : _stock)
    {
        if (item.first->GetType() == type)
        {
            sum += item.second;
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
void Library::Lend(string account, int number, int quantity)
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
            _logList.push_back(Log(account, number, quantity));
            return;
        }
    }

}
void Library::Return(string account, int number, int quantity)
{
//    for (auto item : _stock)
//    {
//        if (item.first->GetNumber() == number) {
//            _stock[item.first] += quantity;
//        }
//    }
//TODO
    try
    {
        Book* book = Search(number);

        for (auto item: _logList)
        {
            if (item.GetAccount() == account)
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

