#include <iostream>
#include <iomanip>
#include "User.h"
using namespace std;

User::User(string account, string password, int type) :
	_account(account),
	_password(password),
	_type(type)
{}

istream& operator>> (istream& input, User& u) {
    string account;
    string password;
    int type;

    input >> quoted(account)
        >> quoted(password)
        >> type;

    u = User(account, password, type);

    return input;
}
ostream& operator<<(ostream& output, const User& u)
{
    output << u._account
        << " "
        << u._password
        << " "
        << u._type;

    return output;
}
