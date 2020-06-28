#pragma once
#ifndef MENU5_H
#define MENU5_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class Menu5 : public IMenu
{
protected:
    int _option = 5;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //MENU5_H