#include <iostream>
using namespace std;

#include"books.h"

books::books(int number, string name, double price, string author, string pubhouse) {  //构造
	_number = number;     //图书编号
	_name = name;     //名称
	_price = price;   //价格
	_author = author;  //作者
	_pubhouse = pubhouse;  //出版社

}
//virtual books::operator>>() = 0;