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
		cout << name << "的历史借阅信息如下：" << endl;
		cout << endl;
		size = Vars::library.QueryLog(name).size();
		while (i < size) {
		    Vars::library.Search(Vars::library.QueryLog(name)[i].GetBookNumber())->ShowMe();
			cout << "数量："
				<< Vars::library.QueryLog(name)[i].GetQuantity() << endl
			    << "借阅时间："
			    << Util::formatTime(Vars::library.QueryLog(name)[i].GetBorrowTime()) << endl;
			if (Vars::library.QueryLog(name)[i].GetReturnTime() >= Vars::library.QueryLog(name)[i].GetBorrowTime())
            {
			    cout << "归还时间：" << endl
			    << Util::formatTime(Vars::library.QueryLog(name)[i].GetReturnTime()) << endl;
			    fflush(stdin);
			    getchar();
            }
			else
            {
			    cout << "暂未归还" << endl;
			    fflush(stdin);
			    getchar();
            }
			i++;
		}
	}
	catch (const char* c) {
			cout << c << endl;
	}
}