#pragma once
#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <map>
#include <vector>
#include "User.h"
#include "Util/Log.h"

using namespace std;

class Library
{
private:
	map<Book, int> _stock;
    vector<User> _userList;
    vector<Log> _logList;


public:
	//ADMIN
	void AddBook(Book &book, int quantity);
	int Statistics(int type);
	void ShowAllLogs();

	//USER
	void Lend(int number, int quantity);
	void Return(int number, int quantity);
	Book Search(int number);   
	User Register(string account, string password);
    int SignIn(string account, string password);
	vector<Log> QueryLog(string account);

	//LOGIC
    map<Book, int> GetStock() { return _stock; }
    vector<User> GetUserList() { return _userList; }
    vector<Log> GetLogList() { return _logList; }
//	friend ostream& operator<< (ostream& output, const map<Book, int>& stock);
//    friend ostream& operator<< (ostream& output, const vector<User>& userList);
//    friend ostream& operator<< (ostream& output, const vector<Log>& logList);
//    friend istream& operator>> (istream& input, const map<Book, int>& stock);
//    friend istream& operator>> (istream& input, const vector<User>& userList);
//    friend istream& operator>> (istream& input, const vector<Log>& logList);

};

#endif   //LIBRARY_H
