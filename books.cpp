#include <iostream>
using namespace std;

#include"books.h"

books::books(int number, string name, double price, string author, string pubhouse) {  //����
	_number = number;     //ͼ����
	_name = name;     //����
	_price = price;   //�۸�
	_author = author;  //����
	_pubhouse = pubhouse;  //������

}
//virtual books::operator>>() = 0;