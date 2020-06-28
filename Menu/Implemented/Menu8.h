//
// Created by Swung 0x48 on 2020/6/28.
//

#ifndef LIBRARYMANAGER_MENU8_H
#define LIBRARYMANAGER_MENU8_H


#include "../IMenu.h"

class Menu8: public IMenu
{
protected:
    int _option = 8;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //LIBRARYMANAGER_MENU8_H
