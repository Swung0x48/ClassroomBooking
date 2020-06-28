//
// Created by Swung 0x48 on 2020/6/28.
//

#ifndef LIBRARYMANAGER_MENU1_H
#define LIBRARYMANAGER_MENU1_H


#include "../IMenu.h"

class Menu1: public IMenu
{
private:
    int _option = 1;
public:
    virtual void Run();
    virtual int GetOption() { return _option; };
};


#endif //LIBRARYMANAGER_MENU1_H
