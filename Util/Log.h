#pragma once
#ifndef LOG_H
#define LOG_H

#include<ctime>
#include<string>

using namespace std;

class Log {
private:
	string _account;
	int _bookNumber;
	time_t _borrowTime;//TODO:
	time_t _returnTime; //TODO:

public:
	void SetAccount( string account ) { _account = account; }
	void SetBookNumber(int bookNumber) { _bookNumber = bookNumber; }
	string GetAccount() { return _account; }
	int GetBookNumber() { return _bookNumber; }

	friend ostream& operator<<(ostream& output, Log& log);
	friend istream& operator>>(istream& input, Log& log);

};

#endif  //LOG_H