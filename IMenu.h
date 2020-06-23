//
// Created by Swung 0x48 on 2020/6/22.
//

#ifndef CLASSROOMBOOKING_IMENU_H
#define CLASSROOMBOOKING_IMENU_H


class IMenu
{
protected:
    int _option;
public:
    virtual void Run() = 0;
    virtual bool IsSelected(int input);
    virtual ~IMenu();
};


#endif //CLASSROOMBOOKING_IMENU_H
