#include <iostream>
#include "log.h"

int conditions()
{
    int x = 6;
    bool compareResult = x == 5;
    if (compareResult)
    {
        log("It's true!");
    }
    else
    {
        log("It's false...");
    }
    std::cin.get();
}