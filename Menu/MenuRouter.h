//
// Created by Swung 0x48 on 2020/6/22.
//

#ifndef CLASSROOMBOOKING_MENUROUTER_H
#define CLASSROOMBOOKING_MENUROUTER_H

#include <vector>
#include "IMenu.h"

using namespace std;

class MenuRouter
{
private:
    vector<IMenu*> _menuStorage;
public:
    virtual void RegisterMenu(IMenu* menu);
    virtual bool EnterMenu(int option);
    virtual ~MenuRouter();
};


#endif //CLASSROOMBOOKING_MENUROUTER_H
