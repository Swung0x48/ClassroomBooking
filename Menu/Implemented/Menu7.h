#pragma once
#ifndef MENU7_H
#define MENU7_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class Menu7 : public IMenu
{
protected:
    int _option = 7;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //MENU7_H