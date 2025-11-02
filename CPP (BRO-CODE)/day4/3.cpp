#include <iostream>

int main()
{
    // pointers = variable that stores a memory address of another variable
    //            sometimes it's easier to work with an address

    // & = address of operator
    // * = dereference operator
    std::string name = "Rounak";
    int age = 21;
    std::string freePizzas[5] = {"pizza1", "pizza2", "pizza3", "pizza4", "pizza5"};

    std::string *ptrName = &name;
    int *ptrAge = &age;
    std::string *ptrFreePizzas = freePizzas; // don't need &

    // std::cout << ptrName << '\n';
    // std::cout << *ptrName << '\n';
    // std::cout << ptrAge << '\n';
    // std::cout << *ptrAge << '\n';
    std::cout << ptrFreePizzas << '\n';
    std::cout << *ptrFreePizzas<< '\n';
    std::cout << *(ptrFreePizzas+1)<< '\n';
    std::cout << *(ptrFreePizzas+2)<< '\n';
    std::cout << *(ptrFreePizzas+3)<< '\n';
    std::cout << *(ptrFreePizzas+4)<< '\n';
    return 0;
}