#pragma once
#ifndef MENU6_H
#define MENU6_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class Menu6 : public IMenu
{
protected:
    int _option = 6;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //MENU6_H