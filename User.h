#pragma once
#ifndef USER_H
#define USER_H

#include <iostream>
using namespace std;

class User{
private:
	string _account;
	string _password;
	int _type;

public:
	User(string account, string password, int type);
	int GetType() { return _type;  }

	friend  istream& operator>> (istream& input, User& u);
	friend ostream& operator<< (ostream& output, User& u);
};

#endif   //USER_H

