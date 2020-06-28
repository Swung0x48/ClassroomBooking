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
    Library l;
    ScienceBook* scienceBook = new ScienceBook(1, "name", 10, "Tom", "A");
    ScienceBook* scienceBook1 = new ScienceBook(2, "name2", 20, "Jack", "B");
    SocialBook* socialBook = new SocialBook(3, "name3", 30, "Sue", "C");
    SocialBook* socialBook1= new SocialBook(4, "name4", 40, "Jhon", "D");
    ForeignBook* foreignBook = new ForeignBook(5, "name5", 50, "Alice", "E","English");
    ForeignBook* foreignBook1 = new ForeignBook(6, "name6", 60, "Canthy", "F","Russian");
    l._stock[scienceBook] = 1;
    l._stock[scienceBook1] = 2;
    l._stock[socialBook] = 3;
    l._stock[socialBook1] = 4;
    l._stock[foreignBook] = 5;
    l._stock[foreignBook1] = 6;

    //Test:Statistics
 /*   cout << l.Statistics(1) << endl;
    cout << l.Statistics(2) << endl;
    cout << l.Statistics(3) << endl;*/

    //Test:Addbookquantity
 /*   
 //    Book *p = &scienceBook;
     l.AddBook(scienceBook, 1);
     cout << l._stock[scienceBook] << endl;*/



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

/*    Vars vars;
    File file;
    ForeignBook foreignBook(3, "BookNameF", 10.20, "AuthorName", "PubHouse", "lang");
//    vars.library.AddBook(&scienceBook1, 2);
//    vars.library.AddBook(&scienceBook, 4);
    file.LoadAll(file.Open(File::UserPath, "r"), Vars::library._userList);
    file.LoadAll(file.Open(File::StockPath, "r"), Vars::library._stock);

    vars.library.AddBook(dynamic_cast<Book *>(&foreignBook), 5);


    for (auto i: Vars::library._stock)
    {
        i.first->ShowMe();
        cout << i.second << endl;
        cout << endl;
    }
// TODO: fix the SegFault (exit code 11)

    Vars::menuRouter.EnterMenu(-1);
    Vars::menuRouter.EnterMenu(0);


    int option;
    cin >> option;
    try
    {
        Vars::menuRouter.EnterMenu(option);
    }
    catch (const char * c)
    {
        cout << c;
    }


    cout << scienceBook.GetType() << endl;
    file.SaveAll(file.Open(File::StockPath, "wt"), Vars::library._stock);
    file.SaveAll(file.Open(File::UserPath, "wt"), Vars::library._userList);*/
    return 0;
}
