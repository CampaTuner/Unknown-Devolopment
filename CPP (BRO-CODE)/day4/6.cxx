#include <iostream>

int main()
{
    // dynamic memory = Memory that allocated after the program
    //                  is already compiled & running.
    //                  Use the 'new' operator to allocate
    //                  memory in the heap rather than the stack

    //                  Useful when we don't know how much memory
    //                  we will need. Makes our programs more flexible,
    //                  especially when accepting user input.

    int *pNum = nullptr;
    pNum = new int;
    *pNum = 21;

    // std::cout << "Address: "<< pNum << '\n' ;
    // std::cout << "Value: "<< *pNum << '\n' ;

    delete pNum;

    char *pGrades = nullptr;
    int size;
    std::cout << "Enter size: ";
    std::cin >> size;
    pGrades = new char[size];

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter grid #" << i + 1 << ": ";
        std::cin >> pGrades[i];
    }
    for (int i = 0; i < size; i++)
    {
        std::cout << *(pGrades + i) << std::endl;
    }
    delete[] pGrades;

    return 0;
}