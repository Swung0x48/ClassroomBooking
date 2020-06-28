#include <iostream>
#include "Menu6.h"
#include "../../Books/Book.h"
#include "../../Vars.h"
#include "../../Books/SocialBook.h"
#include "../../Books/ScienceBook.h"
#include "../../Books/ForeignBook.h"

using namespace std;

void Menu6::Run() {
	cout << "——————查询借阅信息——————" << endl;
	cout << endl;
	cout << "请输入需要查询的借阅人姓名：" << endl;
	fflush(stdin);
	string name; getline(cin, name);

	try {
		Vars::library.QueryLog(name);
		int size,i=0;
		cout << Vars::library.QueryLog(name)[i].GetBorrower() << "的历史借阅信息如下：" << endl;
		cout << endl;
		size = Vars::library.QueryLog(name).size();
		while (i < size) {
			cout << "图书编号："
				<< Vars::library.QueryLog(name)[i].GetBookNumber()
			    << "数量："
				<< Vars::library.QueryLog(name)[i].GetQuantity();
			i++;
		}
	}
	catch (const char* c) {
			cout << c << endl;
	}
}