#include <iostream>
void walk(int steps);
int factorial(int num);

int main()
{
    // recursion
    // walk(10);
    std::cout << "Factorial of 5 is: "<< factorial(5);

    return 0;
}
int factorial(int num)
{
    if (num == 1 || num == 0)
    {
        return 1;
    }
    else
    {
        return num * factorial(num - 1);
    }
}

void walk(int steps)
{
    if (steps > 0)
    {
        std::cout << "walk " << steps << " times \n";
        walk(steps - 1);
    }
}