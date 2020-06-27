//
// Created by Swung 0x48 on 2020/6/22.
//

#ifndef IMENU_H
#define IMENU_H



class IMenu
{
protected:
public:
    virtual void Run() = 0;
    virtual bool IsSelected(int input);
    virtual int GetOption() = 0;
    virtual ~IMenu();
};


#endif //IMENU_H
