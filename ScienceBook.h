#ifndef SCIENCEBOOK_H
#define SCIENCEBOOK_H

#include "Books.h"

class ScienceBook: public Books {

public:
	ScienceBook( int number, string name, double price, string author, string pubHouse);

	int GetType() { return _type; }
};



#endif   //SCIENCEBOOK_H