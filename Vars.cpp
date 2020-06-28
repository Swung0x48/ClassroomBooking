//
// Created by Swung 0x48 on 2020/6/22.
//

#include "Vars.h"
#include "Menu/Implemented/LoginMenu.h"
#include "Menu/Implemented/Menu0.h"
#include "Menu/Implemented/Menu1.h"
#include "Menu/Implemented/Menu2.h"
#include "Menu/Implemented/Menu3.h"
#include "Menu/Implemented/Menu4.h"
#include "Menu/Implemented/Menu5.h"

string Vars::_currentUser;
Library Vars::library;
MenuRouter Vars::menuRouter;

Vars::Vars()
{
    menuRouter.RegisterMenu(new LoginMenu);
    menuRouter.RegisterMenu(new Menu0);
    menuRouter.RegisterMenu(new Menu1);
    menuRouter.RegisterMenu(new Menu2);
    menuRouter.RegisterMenu(new Menu3);
    menuRouter.RegisterMenu(new Menu4);
    menuRouter.RegisterMenu(new Menu5);

}

Vars::~Vars()
{

}
