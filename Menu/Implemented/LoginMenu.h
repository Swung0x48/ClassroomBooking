#pragma once
#ifndef LOGINMENU_H
#define LOGINMENU_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class LoginMenu : public IMenu
{
protected:
    int _option = -2;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //LOGINMENU_H