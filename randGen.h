//
// Created by Swung 0x48 on 2020/6/24.
//

#ifndef LIBRARYMANAGER_RANDGEN_H
#define LIBRARYMANAGER_RANDGEN_H

#include <random>
using namespace std;

class randGen
{
private:
    static default_random_engine randEngine;
public:
    static int getRandom() { return randEngine(); }
};

#endif //LIBRARYMANAGER_RANDGEN_H
