//
// Created by Swung 0x48 on 2020/6/24.
//

#include "File.h"
#include "../Books/Book.h"

string File::BookPath = "book.txt";
string File::UserPath = "user.txt";
string File::LogPath = "log.txt";
string File::StockPath = "stock.txt";

fstream& File::Open(const string& path, string mode)
{
    if (mode == "r")
        _fs.open(path, ios::in);
    else if (mode == "wa")
        _fs.open(path, ios::out | ios::app);
    else if (mode == "wt")
        _fs.open(path, ios::out | ios::trunc);
    return _fs;
}

void File::Close()
{
    _fs.close();
}




