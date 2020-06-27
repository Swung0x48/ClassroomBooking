#pragma once
#ifndef LOGINMENU2_H
#define LOGINMENU2_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class LoginMenu2 : public IMenu
{
protected:
    double _option = 1.2;
public:
    virtual double GetOption() { return _option; }
    virtual void Run();
};


#endif //LOGINMENU2_H
