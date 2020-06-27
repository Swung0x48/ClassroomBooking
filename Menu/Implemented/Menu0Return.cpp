#include "Menu0Return.h"
#include "Library.h"

void Menu0Return::Run() {
    int _choice;

    cout << endl;
    cout << endl;
    cout << "————请选择：————" << endl;
    cout << endl;
    cout << "                1.返回" << endl;
    cout << "                2.退出" << endl;
    cout << endl;
    cout << "请输入您的选择：" << endl;
    if (_choice == 1) {
        //todo: 跳转MainMenu
    }
    else if (_choice == 2 {
        //todo: 跳转Menu7
    }
    else {
        throw "DontHaveThisChoiceException";
    }
}