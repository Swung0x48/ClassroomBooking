#include <iostream>
#include "Menu1.h"
#include "../../Books/Book.h"
#include "../../Vars.h"
#include "../../Books/SocialBook.h"
#include "../../Books/ScienceBook.h"
#include "../../Books/ForeignBook.h"

using namespace std;

void Menu2::Run() {
	cout << "�����������ͼ�顪������" << endl;
	cout << endl;
	cout << "�����������������"��
	fflush(stdin);
	string name; getline(cin, name);
	cout << "���������ͼ��ı�ţ�";
	int id;
	cin >> id;
	cout << "���������ͼ���������";
	int quantity;
	cin >> quantity;
	
    try{
        Vars::library.Lend(name, id, quantity);
		cout << "���ĳɹ���" << endl;
    }
    catch (const char* c){
        if (string(c) == string("NotEnoughInStockException")){
            cout << "��ͼ�����޿�棡" << endl;
        }
        else {
            cout << c << endl;
        }
    }
}