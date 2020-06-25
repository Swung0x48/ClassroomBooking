#pragma once
#ifndef LIBRARY_H
#define LIBRARY_H

#include <iostream>
#include <map>
using namespace std;

class Library
{
private:
	map<Book, int> _stock;


public:
	//ADMIN
	void AddBook(int number, int quantity);
	void Satistics(int type);
	void ShowAllLogs();

	//USER
	void Lend(int number, int quantity);
	void Return(int number, int quantity);
	void Search(int number);
	void SignIn(string account, string password);
	void Register(string account, string password);
	void QueryLog(string account);
};

#endif   //LIBRARY_H
