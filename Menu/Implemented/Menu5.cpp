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

}