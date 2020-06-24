//
// Created by Swung 0x48 on 2020/6/2.
//

#include "randGen.h"
#include <ctime>

default_random_engine randGen::randEngine(time(nullptr));
