#include "LoginMenu1.h"
#include "Library.h"

void LoginMenu1::Run()
{
    string _account;
    string _password;
    cout << "������������¼����������" << endl;
    cout << endl;
    cout << "               �����빤�ţ�" << endl;
    cin >> _account;
    for (auto item : _userList)//???
    {
        if (item.first->GetAccount() == _account) {
            int flag = 1;
            for (int i = 1; flag; i++) {
                cout << "               ���������룺" << endl;
                cin >> _password;
                if (item.first->GetPassword() == _password) {
                    cout << endl;
                    cout << "*******  ��¼�ɹ���******" << endl;
                    flag = 0;
                    //TODO����תMainMenu ��¼�ɹ�����
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
                //TODO:��תLoginMenu2 ע��
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
