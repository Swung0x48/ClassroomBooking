#include <iostream>
#include "Vars.h"
#include "Books/ScienceBook.h"
#include "Books/SocialBook.h"
#include "Util/Util.h"
#include "Util/File.h"
#include "Library.h"
#include <iomanip>
using namespace std;


int main()
{
/*    string a, b;
    cin >> quoted(a) >> quoted(b);
    cout << quoted(a) << "/" << quoted(b);*/

     ScienceBook scienceBook(1, "name", 20, "Tom", "A");
     ScienceBook scienceBook1(2, "name2", 30, "Jack", "B");
//    SocialBook socialBook(2, "name", 20, "Tom", "A");
     Book b;

     File file;

//    file.Open(File::BookPath, "wt") << scienceBook;
//    file.Close();
//    file.Open(File::BookPath, "wa") << scienceBook << scienceBook1 << scienceBook;
//    file.Close();   // remember to close stream before mode change!!
//    file.Open(File::BookPath, "r") >> scienceBook1 >> scienceBook1 >> scienceBook;
//    file.Close();

    cout << scienceBook << endl;
    cout << scienceBook.GetName() << endl;

    Library library;
    library.AddBook(scienceBook, 1);
    library.AddBook(scienceBook1, 2);


//    vector<Book> vec;
//    file.LoadAll(file.Open(File::BookPath, "r"), vec);
//    vec.clear();
//    vec.push_back(scienceBook);
//    file.SaveAll(file.Open(File::BookPath, "wt"), vec);
//
//    for (auto i: vec)
//    {
//        cout << i;
//    }


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
