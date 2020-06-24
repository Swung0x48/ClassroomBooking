#pragma once
#ifndef SOCIALBOOK_H
#define SOCIALBOOK_H

#include "Books.h"
class SocialBook :
    public Books
{
public:
	SocialBook(int number, string name, double price, string author, string pubHouse);

	int GetType() { return _type; }

};

#endif   //SOCIALBOOK_H