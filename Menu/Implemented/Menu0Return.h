#pragma once
#ifndef MENU0RENTURN_H
#define MENU0RENTURN_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class Menu0Return : public IMenu
{
protected:
    int _option = 0;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //MENU0RENTURN_H