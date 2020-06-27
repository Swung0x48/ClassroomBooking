#include <iostream>
#include "Vars.h"
#include "Books/ScienceBook.h"
#include "Books/SocialBook.h"
#include "Util/Util.h"
#include "Util/File.h"
#include "Library.h"
#include "Books/ForeignBook.h"
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



//    file.Open(File::BookPath, "wt") << scienceBook;
//    file.Close();
//    file.Open(File::BookPath, "wa") << scienceBook << scienceBook1 << scienceBook;
//    file.Close();   // remember to close stream before mode change!!
//    file.Open(File::BookPath, "r") >> scienceBook1 >> scienceBook1 >> scienceBook;
//    file.Close();

    /* cout << scienceBook << endl;
     cout << scienceBook.GetName() << endl;

     Library library;
     library.AddBook(&scienceBook, 1);
     library.AddBook(&scienceBook1, 2);*/


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

    File file;
    Vars vars;
    ForeignBook foreignBook(3, "BookNameF", 10.20, "AuthorName", "PubHouse", "lang");
//    vars.library.AddBook(&scienceBook1, 2);
//    vars.library.AddBook(&scienceBook, 4);
//    vars.library.AddBook(dynamic_cast<Book *>(&foreignBook), 5);
//    file.SaveAll(file.Open(File::StockPath, "wt"), vars.library._stock);
    file.LoadAll(file.Open(File::StockPath, "r"), vars.library._stock);



// TODO: fix the SegFault (exit code 11)

    int option;
    cin >> option;
    try
    {
        vars.menuRouter.EnterMenu(option);
    }
    catch (const char * c)
    {
        cout << c;
    }


    cout << scienceBook.GetType() << endl;
//    cout << socialBook.GetType() << endl;
//    cout << Util::getRandom() << endl;
    return 0;
}
