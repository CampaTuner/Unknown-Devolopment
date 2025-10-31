#include <iostream>

int main()
{
    // Temparature convert

    double temp;
    char unit;

    std::cout << "***** Temparature Convertion *****" << std::endl;
    std::cout << "F = Farenheit" << std::endl;
    std::cout << "C = Celsius" << std::endl;
    std::cout << "What unit would you like to convert to: " << std::endl;
    std::cin >> unit;

    if (unit == 'F' || unit == 'f')
    {
        std::cout << "Enter the temparature in Celsius: " << std::endl;
        std::cin >> temp;

        temp = (1.8 * temp) + 32.0;
        std::cout << "Temparature is: " << temp << "F" << std::endl;
    }
    else if (unit == 'C' || unit == 'c')
    {
        std::cout << "Enter the temparature in Farenheit: " << std::endl;
        std::cin >> temp;

        temp = (temp - 32) / 1.8;
        std::cout << "Temparature is: " << temp << "C" << std::endl;
    }
    else
    {
        std::cout << "Please enter in only C/c or F/f" << std::endl;
    }

    std::cout << "***** ********************** *****" << std::endl;
    return 0;
}