//
// Created by Swung 0x48 on 2020/6/22.
//

#include "MenuRouter.h"

void MenuRouter::RegisterMenu(IMenu* menu)
{
    _menuStorage.push_back(menu);
}

bool MenuRouter::EnterMenu(int option)
{
    for (auto& menu: _menuStorage)
    {
        if (menu->IsSelected(option))
        {
            menu->Run();
            return true;
        }
    }
    throw "MenuNotFoundException";
}

MenuRouter::~MenuRouter()
{
    for (auto menu: _menuStorage)
    {
        delete menu;
    }
}
