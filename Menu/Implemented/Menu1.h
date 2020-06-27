//
// Created by Swung 0x48 on 2020/6/22.
//

#ifndef CLASSROOMBOOKING_MENU0_H
#define CLASSROOMBOOKING_MENU0_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class Menu1: public IMenu
{
protected:
    int _option = 1;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //CLASSROOMBOOKING_MENU0_H
