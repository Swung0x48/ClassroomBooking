//
// Created by Swung 0x48 on 2020/6/28.
//
#include <iostream>
#include "Menu1.h"
#include "../../Books/Book.h"
#include "../../Vars.h"
#include "../../Books/SocialBook.h"
#include "../../Books/ScienceBook.h"
#include "../../Books/ForeignBook.h"

using namespace std;

void Menu1::Run(){
    cout << "要如何新增图书？" << endl;
    cout << "1 - 添加已有图书数量; 2 - 新增新的图书" << endl;
    int option; cin >> option;
    if (option == 1)
    {
        cout << "请输入图书编号和数量，用空格分隔" << endl;
        int bookNumber, quantity; cin >> bookNumber >> quantity;
        Vars::library.AddBook(Vars::library.Search(bookNumber), quantity);
        cout << "添加完成" << endl;
        return;
    }
    if (option == 2)
    {
        cout << "请输入新增图书类型：" << endl;
        cout << "1 - 自然科学书; 2 - 人文社科书; 3 - 外文书" << endl;
        int type; cin >> type;
        cout << "请输入书籍名称：" << endl;
        fflush(stdin);
        string name; getline(cin, name);
        cout << "请输入书籍价格：" << endl;
        double price; cin >> price;
        cout << "请输入作者：" << endl;
        fflush(stdin);
        string author; getline(cin, author);
        cout << "请输入出版社：" << endl;
        fflush(stdin);
        string pubHouse; getline(cin, pubHouse);

        Book *book;
        if (type == 1)
            book = new SocialBook(
                    Util::getRandom(),
                    name,
                    price,
                    author,
                    pubHouse);
        else if (type == 2)
            book = new ScienceBook(
                    Util::getRandom(),
                    name,
                    price,
                    author,
                    pubHouse);
        else if (type == 3)
        {
            cout << "请输入语言：" << endl;
            string language; cin >> language;
            book = new ForeignBook(
                    Util::getRandom(),
                    name,
                    price,
                    author,
                    pubHouse,
                    language);
        }
        else
        {
            cout << "输入错误。请重试" << endl;
            return;
        }
        cout << "请输入数量：" << endl;
        int quantity; cin >> quantity;
        Vars::library.AddBook(book, quantity);
        cout << "添加完成" << endl;
    }
}