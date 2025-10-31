#include <iostream>

int main()
{
    // int i = 0;
    // while (i <= 10)
    // {
    //     std::cout << i << std::endl;
    //     i++;
    // }

    // int number;
    // do
    // {
    //     std::cout << "Enter a positive #: ";
    //     std::cin >> number;
    // } while (number <= 0);
    // std::cout << "The # is: " << number;

    for (int i = 0; i < 10; i++)
    {
        if (i == 5)
            continue;
        if (i == 9)
            break;
        std::cout << i << std::endl;
    }

    for (int i = 0; i <= 5; i++)
    {
        for (int j = 0; j < i; j++)
        {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}