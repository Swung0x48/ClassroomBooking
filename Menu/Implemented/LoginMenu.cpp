#include <iostream>
#include "LoginMenu.h"
#include "../../Vars.h"

using namespace std;

void LoginMenu::Run()
{
    string userName, password;
    cout << "请输入工号： " << endl;
    cin >> userName;
    cout << "请输入密码：" << endl;
    cin >> password;
    try
    {
        Vars::library.SignIn(userName, password);
    }
    catch (const char * c)
    {
        if (string(c) == string("PasswordIncorrectException"))
        {
            cout << "密码错误。将退出系统。" << endl;
            exit(0);
        }
        else if (string(c) == string("UserNotFoundException"))
        {
            cout << "未找到用户。是否注册？(y/n)" << endl;
            char opt;
            cin >> opt;
            if (opt == 'y')
            {
                cout << "将用之前的账户信息注册" << endl;
                Vars::library._userList.push_back(Vars::library.Register(userName, password));
                Vars::_currentUser = userName;
            }
            else
            {
                cout << "将退出系统。" << endl;
                exit(0);
            }
        }
    }
}