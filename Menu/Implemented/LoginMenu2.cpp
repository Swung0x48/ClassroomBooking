#include "LoginMenu2.h"
#include "Library.h"

void LoginMenu2::Run()
{
    string _account;
    string _password;
    cout << "—————注册—————" << endl;
    cout << endl;
    cout << "               请输入工号：" << endl;
    cin >> _account;
    for (auto item : _userList)//???
    {
        if (item.first->GetAccount() != _account) {
                cout << "               请输入密码：" << endl;
                cin >> _password;
                cout << "*******  注册成功！******" << endl;
                    //TODO：跳转MainMenu 登录成功界面
                }
        else {
            int _choice;

            cout << "******  工号已存在！*****" << endl;
            cout << endl;
            cout << "             请选择：" << endl;
            cout << "             1.登录" << endl;
            cout << "             2.重新注册" << endl;
            cout << endl;
            cout << "请输入您的选择：" << endl;
            cin >> _choice;
            if (_choice == 2) {
                //TODO:跳转LoginMenu2 注册
            }
            else if (_choice == 1) {
                //TODO:跳转LoginMenu1 登录
            }
            else {
                throw "DontHaveThisChoiceException";
            }
        }
    }
}