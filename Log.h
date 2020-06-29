#pragma once
#ifndef LOG_H
#define LOG_H

#include<ctime>
#include<string>
#include "Util/Util.h"

using namespace std;

class Log {
private:
	string _borrower;
	int _bookNumber;
	int _quantity;
	time_t _borrowTime;
	time_t _returnTime;

public:
    Log();
    Log(string borrower, int bookNumber, int quantity);
    void SetAccount( string borrower ) { _borrower = borrower; }
	void SetBookNumber(int bookNumber) { _bookNumber = bookNumber; }
	string GetBorrower() { return _borrower; }
	int GetBookNumber() { return _bookNumber; }
	void SetQuantity(int quantity) { _quantity = quantity; }
    int GetQuantity() { return _quantity; }
    time_t GetBorrowTime() { return _borrowTime; }
    void SetReturnTime() { _returnTime = Util::getTime(); }
    void SetReturnTime(time_t time) { _returnTime = time; }
    time_t GetReturnTime() { return _returnTime; }

    friend ostream& operator<<(ostream& output, const Log& log);
	friend istream& operator>>(istream& input, Log& log);

};

#endif  //LOG_H