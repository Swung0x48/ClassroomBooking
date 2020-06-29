#include <iostream>
#include "Menu5.h"
#include "../../Books/Book.h"
#include "../../Vars.h"
#include "../../Books/SocialBook.h"
#include "../../Books/ScienceBook.h"
#include "../../Books/ForeignBook.h"

using namespace std;

void Menu5::Run() {
	cout << "——————统计图书——————" << endl;
	cout << endl;
	cout << "                您可以选择以下类型：" << endl;
	cout << "                1.自然科学类" << endl;
	cout << "                2.人文社科类" << endl;
	cout << "                3.外文类" << endl;
	cout << endl;
	cout << "请输入需要统计的图书类型：";
	int opt;
	cin >> opt;

	try {
		Vars::library.Statistics(opt);
		if (opt == 1) {
			cout << "自然科学类图书有：";
		}
		else if (opt == 2) {
			cout << "人文社科类图书有：";
		}
		else if (opt == 3) {
			cout << "外文类图书有：";
		}
		cout << Vars::library.Statistics(opt) << "本" << endl;
		fflush(stdin);
		getchar();
	}
	catch (const char* c) {
		if (string(c) == string("TypeNotFoundException")) {
			cout << "无此图书类型！" << endl;
			fflush(stdin);
			getchar();
		}
		else {
			cout << c << endl;
		}
	}

}