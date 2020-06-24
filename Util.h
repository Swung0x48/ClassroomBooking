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
};

#endif //LIBRARYMANAGER_UTIL_H
