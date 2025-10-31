#include <iostream>
#include <cmath>

int main()
{
    //  Task1: Calculate Hypotenuse
    double a, b;
    std::cout << "Enter a: ";
    std::cin >> a;
    std::cout << "Enter b: ";
    std::cin >> b;

    double c = sqrt(pow(a, 2) + pow(b, 2));
    std::cout << "Hypotenuse of " << a << " and " << b << " is: " << c;

    return 0;
}
