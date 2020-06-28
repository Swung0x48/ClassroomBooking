//
// Created by Swung 0x48 on 2020/6/28.
//

#ifndef LIBRARYMANAGER_MENU7_H
#define LIBRARYMANAGER_MENU7_H


#include "../IMenu.h"

class Menu7: public IMenu
{
protected:
    int _option = 7;
public:
    virtual int GetOption() { return _option; }
    virtual void Run();
};


#endif //LIBRARYMANAGER_MENU7_H
