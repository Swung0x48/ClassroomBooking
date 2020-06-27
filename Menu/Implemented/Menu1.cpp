#include "Menu1.h"
#include "Library.h"

void Menu1::Run(){
    int _choice;

    cout << "—————新增图书信息—————" << endl;
    cout << endl;
    cout << "                    请选择：" << endl;
    cout << "                    1.增加新的图书" << endl;
    cout << "                    2.增加已有图书数量" << endl;
    cout << endl;
    cout << "请输入您的选择：" << endl;
    cin >> _choice;
    if (_choice == 1) {
        //todo: 
    }
    else if (_choice == 2 {
        //todo: 
    }
    else {
        throw "DontHaveThisChoiceException";
    }
}
