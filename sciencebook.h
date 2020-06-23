#ifndef SCIENCEBOOK_H
#define SCIENCEBOOK_H

#include "books.h"

class sciencebook: public books {

public:
	sciencebook(int _type, int _num, string _nam, double _pri, string _aut, string _pubh) : books(_num, _nam, _pri, _aut, _pubh) {
		_type = 1;
	}
};



#endif   //SCIENCEBOOK_H