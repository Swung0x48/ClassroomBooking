//
// Created by Swung 0x48 on 2020/6/22.
//

#include "IMenu.h"

bool IMenu::IsSelected(int input)
{
    return input == GetOption();
}

IMenu::~IMenu()
{

}
