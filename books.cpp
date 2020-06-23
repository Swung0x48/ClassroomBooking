#include <iostream>
using namespace std;

#include"books.h"

books::books(int _num, string _nam, double _pri, string _aut, string _pubh) {  //构造
	_number = _num;     //图书编号
	_name = _nam;     //名称
	_price = _pri;   //价格
	_author = _aut;  //作者
	_pubhouse = _pubh;  //出版社

}
int books::get_type() {  //得到图书类型
	return _type;
}
int books::get_number() {   //得到图书编号
	return _number;
}
string books::get_name() {  //得到名称
	return _name;
}
double books::get_price() {  //得到价格
	return _price;
}
string books::get_author() {  //得到作者
	return _author;
}
string books::get_pubhouse() {  //得到出版社
	return _pubhouse;
}
//virtual books::operator>>() = 0;