#pragma once
#ifndef MENU2_H
#define MENU2_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class Menu2 : public IMenu
{
protected:
    int _option = 2;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //MENU2_H