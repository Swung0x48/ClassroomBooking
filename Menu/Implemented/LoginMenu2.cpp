#include "LoginMenu2.h"
#include "Library.h"

void LoginMenu2::Run()
{
    string _account;
    string _password;
    cout << "����������ע�ᡪ��������" << endl;
    cout << endl;
    cout << "               �����빤�ţ�" << endl;
    cin >> _account;
    for (auto item : _userList)//???
    {
        if (item.first->GetAccount() != _account) {
                cout << "               ���������룺" << endl;
                cin >> _password;
                cout << "*******  ע��ɹ���******" << endl;
                    //TODO����תMainMenu ��¼�ɹ�����
                }
        else {
            int _choice;

            cout << "******  �����Ѵ��ڣ�*****" << endl;
            cout << endl;
            cout << "             ��ѡ��" << endl;
            cout << "             1.��¼" << endl;
            cout << "             2.����ע��" << endl;
            cout << endl;
            cout << "����������ѡ��" << endl;
            cin >> _choice;
            if (_choice == 2) {
                //TODO:��תLoginMenu2 ע��
            }
            else if (_choice == 1) {
                //TODO:��תLoginMenu1 ��¼
            }
            else {
                throw "DontHaveThisChoiceException";
            }
        }
    }
}