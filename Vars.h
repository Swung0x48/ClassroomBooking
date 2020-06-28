//
// Created by Swung 0x48 on 2020/6/22.
//

#ifndef CLASSROOMBOOKING_VARS_H
#define CLASSROOMBOOKING_VARS_H


#include "Menu/MenuRouter.h"
#include "Library.h"

class Vars
{
public:
    static bool cancellationToken;
    static string _currentUser;
    static Library library;
    static MenuRouter menuRouter;
    static string GetCurrentUser() { return _currentUser; }

    Vars();
    ~Vars();
};


#endif //CLASSROOMBOOKING_VARS_H
