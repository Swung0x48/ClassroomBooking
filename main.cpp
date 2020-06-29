#include <iostream>
#include "Vars.h"
#include "Util/File.h"
using namespace std;

int main()
{
    Vars vars;
    File file;
    file.LoadAll(file.Open(File::UserPath, "r"), Vars::library._userList);
    file.LoadAll(file.Open(File::StockPath, "r"), Vars::library._stock);
    file.LoadAll(file.Open(File::LogPath, "r"), Vars::library._logList);

    Vars::menuRouter.EnterMenu(-1);
    while (!Vars::cancellationToken)
    {
        try
        {
            Vars::menuRouter.EnterMenu(0);
            fflush(stdin);
            int option;
            cin >> option;
            Vars::menuRouter.EnterMenu(option);
        }
        catch (const char *c)
        {
            cout << c;
        }
    }

    file.SaveAll(file.Open(File::StockPath, "wt"), Vars::library._stock);
    file.SaveAll(file.Open(File::UserPath, "wt"), Vars::library._userList);
    file.SaveAll(file.Open(File::LogPath, "wt"), Vars::library._logList);
    return 0;
}
