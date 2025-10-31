#include <iostream>

int main()
{
    // Logical operator &&, ||, !
    int temp;
    std::cout << "Enter The Temparature" << std::endl;
    std::cin >> temp;

    // if (temp > 0 && temp < 30)
    if (temp <= 0 || temp >= 30)
    {
        std::cout << "The temparature is Bad!" << std::endl;
    }
    else
    {
        std::cout << "The Temparature is Good" << std::endl;
    }

    return 0;
}