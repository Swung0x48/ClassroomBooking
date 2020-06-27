//
// Created by Swung 0x48 on 2020/6/24.
//

#ifndef LIBRARYMANAGER_UTIL_H
#define LIBRARYMANAGER_UTIL_H

#include <random>
using namespace std;

class Util
{
private:
    static default_random_engine randEngine;
public:

    static int getRandom() { return randEngine(); }

    static string to_string(int val)
    {
        char buf[20];
        sprintf(buf, "%d", val);
        return string(buf);
    }

    static string to_string(double val)
    {
        char buf[2000];
        sprintf(buf, "%.2f", val);
        return string(buf);
    }

    static string to_string(long val)
    {
        char buf[2000];
        sprintf(buf, "%ld", val);
        return string(buf);
    }

    static string to_string(const char* val)
    {
        return string(val);
    }

    static time_t getTime()
    {
        time_t curTime;
        time(&curTime);
        return curTime;
    }

    static string formatTime(time_t time)
    {
        char tmp[64];
        strftime(tmp, sizeof(tmp), "%Y-%m-%d %H:%M:%S",localtime(&time) );
        return string(tmp);

    }
};

#endif //LIBRARYMANAGER_UTIL_H
