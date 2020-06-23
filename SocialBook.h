#pragma once
#include<iostream>
//#include<string>
#include "Books.h"
class SocialBook :
    public Books
{
public:
	SocialBook(int number, string name, double price, string author, string pubHouse);

	int GetType() { return _type; }

};

