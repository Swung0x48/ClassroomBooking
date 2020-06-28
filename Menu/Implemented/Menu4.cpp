#include <iostream>
#include "Menu4.h"
#include "../../Books/Book.h"
#include "../../Vars.h"
#include "../../Books/SocialBook.h"
#include "../../Books/ScienceBook.h"
#include "../../Books/ForeignBook.h"

using namespace std;

void Menu4::Run() {
	cout << "——————查询图书——————" << endl;
	cout << endl;
	cout << "请输入需要查询的图书编号：";
	int id;
	cin >> id;
	try {
		Vars::library.Search(id);
		cout << "图书编号："
			<< Vars::library.Search(id)->GetNumber() << endl
			<< "书名："
			<< Vars::library.Search(id)->GetName() << endl
			<< "作者："
			<< Vars::library.Search(id)->GetAuthor() << endl
			<< "价格："
			<< Vars::library.Search(id)->GetPrice() << endl
			<< "出版社："
			<< Vars::library.Search(id)->GetPubHouse() << endl
		    << "库存："
			<< Vars::library._stock[Vars::library.Search(id)] << endl;
	}
	catch (const char* c) {
		if (string(c) == string("BookNotFoundException")) {
			cout << "暂无此图书信息！" << endl;
		}
		else {
			cout << c << endl;
		}
	}
}