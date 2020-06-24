#include <iostream>
#include "Vars.h"
#include "Books/ScienceBook.h"
#include "Books/SocialBook.h"
#include "Util/Util.h"
#include "Util/File.h"
#include <iomanip>
using namespace std;


int main()
{
/*    string a, b;
    cin >> quoted(a) >> quoted(b);
    cout << quoted(a) << "/" << quoted(b);*/

     ScienceBook scienceBook(1, "name", 20, "Tom", "A");
//    SocialBook socialBook(2, "name", 20, "Tom", "A");
    File file;

    file.Open(File::BookPath, "wa") << scienceBook;
    file.Open(File::BookPath, "wa") << scienceBook << scienceBook << scienceBook;
    file.Close();   // remember to close stream before mode change!!
    file.Open(File::BookPath, "r") >> scienceBook;
    file.Close();

    cout << scienceBook << endl;
    cout << scienceBook.GetName() << endl;

    Vars vars;
    if (!vars.menuRouter.EnterMenu(0))
    {
        cout << "Invaild Menu!" << endl;
    }
    cout << scienceBook.GetType() << endl;
//    cout << socialBook.GetType() << endl;
//    cout << Util::getRandom() << endl;
    return 0;
}
