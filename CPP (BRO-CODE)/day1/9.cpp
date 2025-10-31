#include <iostream>
#include <cmath>
int main()
{

    double x = 3.12;
    double y = 4;
    double z;

    z = std::max(x, y);
    z = std::min(x, y);
    z = pow(x, y);
    z = sqrt(y);
    z = abs(y);
    z = ceil(y);
    z = floor(y);

    std::cout << "Your age is " << z;

    return 0;
}