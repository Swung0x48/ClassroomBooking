#include <iostream>
#include "Menu2.h"
#include "../../Books/Book.h"
#include "../../Vars.h"
#include "../../Books/SocialBook.h"
#include "../../Books/ScienceBook.h"
#include "../../Books/ForeignBook.h"

using namespace std;

void Menu2::Run() {
	cout << "——————外借图书——————" << endl;
	cout << endl;
	cout << "请输入借阅人姓名：";
	fflush(stdin);
	string name; getline(cin, name);
	cout << "请输入外借图书的编号：";
	int id;
	cin >> id;
	cout << "请输入外借图书的数量：";
	int quantity;
	cin >> quantity;
	
    try{
        Vars::library.Lend(name, id, quantity);
		cout << "借阅成功！" << endl;
    }
    catch (const char* c){
        if (string(c) == string("NotEnoughInStockException")){
            cout << "此图书暂无库存！" << endl;
        }
        else {
            cout << c << endl;
        }
    }
}