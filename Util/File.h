//
// Created by Swung 0x48 on 2020/6/24.
//

#ifndef LIBRARYMANAGER_FILE_H
#define LIBRARYMANAGER_FILE_H
#include <fstream>
using namespace std;

class File
{
private:
    fstream _fs;
public:
    static string BookPath;
    static string UserPath;
    static string LogPath;
//    static string GetBookPath() { return BookPath; }
//    static string GetUserPath() { return UserPath; }
//    static string GetLogPath() { return LogPath; }

    fstream& Open(const string& path, string mode);
    void Close();
};


#endif //LIBRARYMANAGER_FILE_H
