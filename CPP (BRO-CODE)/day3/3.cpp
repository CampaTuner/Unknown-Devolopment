#include <iostream>
void printNum();
int myNum = 9;
int main()
{
    int myNum = 1;
    printNum();
    return 0;
}

void printNum()
{
    int myNum = 10;
    std::cout << ::myNum; // mean its used global not local
}