#include <iostream>
#include "Vars.h"

int main()
{
    Vars Vars;
    if (!Vars.menuRouter.EnterMenu(0))
    {
        cout << "Invaild Menu!" << endl;
    }
    cout << endl;
    return 0;
}
