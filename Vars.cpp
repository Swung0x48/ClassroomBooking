//
// Created by Swung 0x48 on 2020/6/22.
//

#include "Vars.h"
#include "Menu/Menu0.h"

Vars::Vars()
{
    menuRouter.RegisterMenu(new Menu0);
}

Vars::~Vars()
{

}
