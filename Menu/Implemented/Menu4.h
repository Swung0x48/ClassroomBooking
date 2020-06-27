//
// Created by Swung 0x48 on 2020/6/22.
//

#ifndef MENU4_H
#define MENU4_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class Menu4: public IMenu
{
protected:
    int _option = 4;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //MENU4_H
