//
// Created by Swung 0x48 on 2020/6/27.
//

#ifndef LIBRARYMANAGER_LOGINMENU_H
#define LIBRARYMANAGER_LOGINMENU_H


#include "../IMenu.h"

class LoginMenu: public IMenu
{
protected:
    int _option = -1;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //LIBRARYMANAGER_LOGINMENU_H
