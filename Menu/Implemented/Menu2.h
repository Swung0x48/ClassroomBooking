#ifndef CLASSROOMBOOKING_MENU1_H
#define CLASSROOMBOOKING_MENU1_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class Menu2: public IMenu
{
protected:
    int _option = 2;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //CLASSROOMBOOKING_MENU0_H
