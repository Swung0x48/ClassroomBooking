#include <iostream>
#include "Menu3.h"
#include "../../Books/Book.h"
#include "../../Vars.h"
#include "../../Books/SocialBook.h"
#include "../../Books/ScienceBook.h"
#include "../../Books/ForeignBook.h"

using namespace std;

void Menu3::Run() {
	cout << "——————归还图书——————" << endl;
	cout << endl;
	cout << "请输入借阅人姓名：";
		fflush(stdin);
	string name; getline(cin, name);
	cout << "请输入归还图书的编号：";
	int id;
	cin >> id;
	cout << "请输入归还图书的数量：";
	int quantity;
	cin >> quantity;

	try {
		Vars::library.Return(name, id, quantity);
		cout << "归还成功！" << endl;
	}
	catch (const char* c) {
			cout << c << endl;
	}
}