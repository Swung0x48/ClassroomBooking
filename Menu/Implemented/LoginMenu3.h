#pragma once
#ifndef LOGINMENU3_H
#define LOGINMENU3_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class LoginMenu3 : public IMenu
{
protected:
    double _option = 1.3;
public:
    virtual double GetOption() { return _option; }
    virtual void Run();
};


#endif //LOGINMENU3_H
