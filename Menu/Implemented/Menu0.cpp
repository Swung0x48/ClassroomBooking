//
// Created by Swung 0x48 on 2020/6/22.
//

#include "Menu0.h"
#include "Library.h"

void Menu0::Run()
{
    string _account;
    string _password;
    cout << "������������¼����������" << endl;
    cout << endl;
    cout << "               �����빤�ţ�" << endl;
    cin >> _account;
    for (auto item :  _userList)
    {
        if (item.first->GetAccount() == _account){
            int flag = 1;
            for (int i = 1; flag; i++) {
                cout << "               ���������룺" << endl;
                cin >> _password;
                if (item.first->GetPassword() == _password) {
                    cout << endl;
                    cout << "*******  ��¼�ɹ���******" << endl;
                    flag = 0;
                    //TODO����תMenu2 ��¼�ɹ�����
                }
                else {
                    cout << "*******  �������******" << endl;
                }
            }
        }
        else {
            int _choice;

            cout << "******  ���Ų����ڣ�*****" << endl;
            cout << endl;
            cout << "             ��ѡ��" << endl;
            cout << "             1.���µ�¼" << endl;
            cout << "             2.ע�����û�" << endl;
            cout << endl;
            cout << "����������ѡ��" << endl;
            cin >> _choice;
            if (_choice == 2) {
                //TODO:��תMenu1 ע��
            }
            else if (_choice == 1) {
                continue;
            }
            else {
                throw "DontHaveThisChoiceException";
            }
        }
    }
}
