#include <iostream>
#include "Vars.h"
#include "Books.h"
#include "ScienceBook.h"


int main()
{
    ScienceBook scienceBook(1, " name", 20, "Tom", "A");

    Vars Vars;
    if (!Vars.menuRouter.EnterMenu(0))
    {
        cout << "Invaild Menu!" << endl;
    }
    cout << scienceBook.GetType() << endl;
    cout << endl;
    return 0;
}
