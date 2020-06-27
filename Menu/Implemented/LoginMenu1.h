#pragma once
#ifndef LOGINMENU1_H
#define LOGINMENU1_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class LoginMenu1 : public IMenu
{
protected:
    double _option = 1.1;
public:
    virtual double GetOption() { return _option; }
    virtual void Run();
};


#endif //LOGINMENU1_H