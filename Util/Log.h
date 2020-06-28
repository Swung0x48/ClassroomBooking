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
	int _quantity;
	time_t _borrowTime;
	time_t _returnTime;

public:
    Log(string account, int bookNumber, int quantity);
    void SetAccount( string account ) { _account = account; }
	void SetBookNumber(int bookNumber) { _bookNumber = bookNumber; }
	string GetAccount() { return _account; }
	int GetBookNumber() { return _bookNumber; }
	void SetQuantity(int quantity) { _quantity = quantity; }
    int GetQuantity() { return _quantity; }
    void SetReturnTime() { _returnTime = Util::getTime(); }
    void SetReturnTime(time_t time) { _returnTime = time; }

    friend ostream& operator<<(ostream& output, const Log& log);
	friend istream& operator>>(istream& input, Log& log);

};

#endif  //LOG_H