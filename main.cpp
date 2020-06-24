#include <iostream>
#include "Vars.h"
#include "ScienceBook.h"
#include "SocialBook.h"
#include "randGen.h"
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
/*    string a, b;
    cin >> quoted(a) >> quoted(b);
    cout << quoted(a) << "/" << quoted(b);*/

    ScienceBook scienceBook(1, "name", 20, "Tom", "A");
    SocialBook socialBook(2, "name", 20, "Tom", "A");
    Vars Vars;
    if (!Vars.menuRouter.EnterMenu(0))
    {
        cout << "Invaild Menu!" << endl;
    }
    cout << scienceBook.GetType() << endl;
    cout << socialBook.GetType() << endl;
    cout << randGen::getRandom() << endl;
    return 0;
}
