#include <iostream>
using namespace std;

#include"books.h"

books::books(int _num, string _nam, double _pri, string _aut, string _pubh) {  //����
	_number = _num;     //ͼ����
	_name = _nam;     //����
	_price = _pri;   //�۸�
	_author = _aut;  //����
	_pubhouse = _pubh;  //������

}
int books::get_type() {  //�õ�ͼ������
	return _type;
}
int books::get_number() {   //�õ�ͼ����
	return _number;
}
string books::get_name() {  //�õ�����
	return _name;
}
double books::get_price() {  //�õ��۸�
	return _price;
}
string books::get_author() {  //�õ�����
	return _author;
}
string books::get_pubhouse() {  //�õ�������
	return _pubhouse;
}
//virtual books::operator>>() = 0;