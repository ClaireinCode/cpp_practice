#include <iostream>
#include "log.h"

int main()
{
    int variable = 8; //-2bn -> 2bn 4bytes
    std::cout << variable << std::endl;
    variable = 13;
    unsigned int number = 100; //it's really big no negatives
    char letter = 'A';
    char another_letter = 65; //4 bytes

    float numbah = 5.5f; //4bytes
    double num = 5.2; //8bytes

    bool aliens = true;

    std::cout << sizeof(double) << std::endl;

    
}

int multiply()
{
    return 5 * 8;
}

void log(char* message)
{
    std::cout << message << std::endl;
}