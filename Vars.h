//
// Created by Swung 0x48 on 2020/6/22.
//

#ifndef CLASSROOMBOOKING_VARS_H
#define CLASSROOMBOOKING_VARS_H


#include "Menu/MenuRouter.h"
#include "Library.h"

class Vars
{
    int _currentUser;
    Library library;
public:

    MenuRouter menuRouter;
    Vars();
    ~Vars();
};


#endif //CLASSROOMBOOKING_VARS_H
