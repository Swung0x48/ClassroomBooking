#include <iostream>
#include "Menu1.h"
#include "../../Books/Book.h"
#include "../../Vars.h"
#include "../../Books/SocialBook.h"
#include "../../Books/ScienceBook.h"
#include "../../Books/ForeignBook.h"

using namespace std;

void Menu3::Run() {
	cout << "���������黹ͼ�顪������" << endl;
	cout << endl;
	cout << "�����������������"��
		fflush(stdin);
	string name; getline(cin, name);
	cout << "������黹ͼ��ı�ţ�";
	int id;
	cin >> id;
	cout << "������黹ͼ���������";
	int quantity;
	cin >> quantity;

	try {
		Vars::library.Return(name, id, quantity);
		cout << "�黹�ɹ���" << endl;
	}
	catch (const char* c) {
			cout << c << endl;
	}
}