//
// Created by Swung 0x48 on 2020/6/22.
//

#ifndef CLASSROOMBOOKING_IMENU_H
#define CLASSROOMBOOKING_IMENU_H


class IMenu
{
protected:
public:
    virtual void Run() = 0;
    virtual bool IsSelected(int input);
    virtual int GetOption() = 0;
    virtual ~IMenu();
};


#endif //CLASSROOMBOOKING_IMENU_H
