#pragma once 
#ifndef SCIENCEBOOK_H
#define SCIENCEBOOK_H

#include "Book.h"

class ScienceBook: public Book
{
public:
	ScienceBook( int number, string name, double price, string author, string pubHouse);
//	int GetType() { return _type; }
};



#endif   //SCIENCEBOOK_H