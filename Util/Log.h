#pragma once
#ifndef LOG_H
#define LOG_H

#include<ctime>
#include<string>
#include "Util.h"

using namespace std;

class Log {
private:
	string _account;
	int _bookNumber;
	time_t _borrowTime;//TODO:
	time_t _returnTime; //TODO:

public:
    Log(string account, int bookNumber);
    void SetAccount( string account ) { _account = account; }
	void SetBookNumber(int bookNumber) { _bookNumber = bookNumber; }
	string GetAccount() { return _account; }
	int GetBookNumber() { return _bookNumber; }
    void SetReturnTime() { _returnTime = Util::getTime(); }

    friend ostream& operator<<(ostream& output, const Log& log);
	friend istream& operator>>(istream& input, Log& log);

};

#endif  //LOG_H