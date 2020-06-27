//
// Created by Swung 0x48 on 2020/6/22.
//

#include "Menu0.h"
#include "Library.h"

void Menu0::Run()
{
    string _account;
    string _password;
    cout << "—————登录—————" << endl;
    cout << endl;
    cout << "               请输入工号：" << endl;
    cin >> _account;
    for (auto item :  _userList)
    {
        if (item.first->GetAccount() == _account){
            int flag = 1;
            for (int i = 1; flag; i++) {
                cout << "               请输入密码：" << endl;
                cin >> _password;
                if (item.first->GetPassword() == _password) {
                    cout << endl;
                    cout << "*******  登录成功！******" << endl;
                    flag = 0;
                    //TODO：跳转Menu2 登录成功界面
                }
                else {
                    cout << "*******  密码错误！******" << endl;
                }
            }
        }
        else {
            int _choice;

            cout << "******  工号不存在！*****" << endl;
            cout << endl;
            cout << "             请选择：" << endl;
            cout << "             1.重新登录" << endl;
            cout << "             2.注册新用户" << endl;
            cout << endl;
            cout << "请输入您的选择：" << endl;
            cin >> _choice;
            if (_choice == 2) {
                //TODO:跳转Menu1 注册
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
