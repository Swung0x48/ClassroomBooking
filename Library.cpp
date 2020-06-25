#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include "Books/Book.h"
#include "Library.h"

using namespace std;

/*Book b;
map<int, int> stock;
int _quantity = 1;
stock[b._number] = _quantity;*/


//ADMIN
void Library::AddBook(Book &book, int quantity)
{
    _stock[book] += quantity;
}
void Library::Statistics(int type) {

}
void Library::ShowAllLogs() {

}

//USER
void Library::Lend(int number, int quantity) {

}
void Library::Return(int number, int quantity) {

}
void Library::Search(int number) {

}
void Library::SignIn(string account, string password) {

}
void Library::Register(string account, string password) {

}
void Library::QueryLog(string account) {

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
