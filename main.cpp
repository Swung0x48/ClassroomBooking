#include <iostream>
#include "Vars.h"
#include "Books/ScienceBook.h"
#include "Books/SocialBook.h"
#include "Util.h"
#include <iomanip>
using namespace std;


int main()
{
/*    string a, b;
    cin >> quoted(a) >> quoted(b);
    cout << quoted(a) << "/" << quoted(b);*/

//    ScienceBook scienceBook(1, "name", 20, "Tom", "A");
//    SocialBook socialBook(2, "name", 20, "Tom", "A");

  /*  Books a;
    cin >> a;
    cout << a;*/

    Vars vars;
    if (!vars.menuRouter.EnterMenu(0))
    {
        cout << "Invaild Menu!" << endl;
    }
//    cout << scienceBook.GetType() << endl;
//    cout << socialBook.GetType() << endl;
//    cout << Util::getRandom() << endl;
    return 0;
}
