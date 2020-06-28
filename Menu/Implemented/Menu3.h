#pragma once
#ifndef MENU3_H
#define MENU3_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class Menu3 : public IMenu
{
protected:
    int _option = 3;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //MENU3_H
