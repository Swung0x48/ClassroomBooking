#include <iostream>
#include "Vars.h"
#include "books.h"
#include "sciencebook.h"

sciencebook ScienceBook;

int main()
{
    Vars Vars;
    if (!Vars.menuRouter.EnterMenu(0))
    {
        cout << "Invaild Menu!" << endl;
    }
    cout << ScienceBook.get_type() << endl;
    return 0;
}
