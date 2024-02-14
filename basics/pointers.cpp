#include <iostream>

#define LOG(x) std::cout << x << std::endl

int pointers()
{
    int var = 8;
    int* ptr = &var;
    *ptr = 10;
    LOG(var);

    //allocate memory

    char* buffer = new char[8];
    //memset(buffer, 0, size in bytes)
    memset(buffer, 0, 8);

    char** ptr = &buffer;//a pointer to a pointer

    delete[]buffer; //delete allocated memory after you finish.

    //references

    int a = 5;
    int* b = &a;
    int& ref = a;//next to the type, makes it a reference

    ref = 2;
    LOG(a);

    std::cin.get();
}

void increment(int& value)
{
    value++;
}

void reference(int* value) //takes in pointer
{
    (*value)++; //references the value FIRST and then increments the value
}