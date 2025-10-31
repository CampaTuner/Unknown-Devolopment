#include <iostream>

int main()
{

    int age;

    std::cout << "Enter Your age: ";
    std::cin >> age;
    if (age >= 18)
    {
        std::cout << "welcome to this site!";
    }
    else if (age < 0)
    {
        std::cout << "you haven't been born yet!";
    }
    else
    {
        std::cout << "you are not old enough to enter!";
    }


    

    return 0;
}