#ifndef SCIENCEBOOK_H
#define SCIENCEBOOK_H

#include "books.h"

class sciencebook: public books {

public:
	sciencebook(int type, int number, string name, double price, string author, string pubhouse);
	int GetType() {  //�õ�ͼ������
		return _type;
	}
};



#endif   //SCIENCEBOOK_H