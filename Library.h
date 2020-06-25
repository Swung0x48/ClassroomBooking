#pragma once
#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <map>
#include <vector>
#include "User.h"

using namespace std;

class Library
{
private:
	map<Book, int> _stock;
    vector<User> _userList;
    //vector<Log> _logList;


public:
	//ADMIN
	void AddBook(Book &book, int quantity);
	void Statistics(int type);
	void ShowAllLogs();

	//USER
	void Lend(int number, int quantity);
	void Return(int number, int quantity);
	void Search(int number);
	void SignIn(string account, string password);
	void Register(string account, string password);
	void QueryLog(string account);

	//LOGIC
	friend ostream& operator<< (ostream& output, const map<Book, int>& stock);
};

#endif   //LIBRARY_H
