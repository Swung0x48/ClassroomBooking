#ifndef MAINMENU_H
#define MAINMENU_H

#include "../IMenu.h"
#include <iostream>
using namespace std;

class MainMenu : public IMenu
{
protected:
    int _option = -1;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //MAINMENU_H
