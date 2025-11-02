#include <iostream>
void swap(std::string &x, std::string &y);
int main()
{
    // pass by value(x) & pass by reference(&x)
    std::string x = "Koll-Aid";
    std::string y = "Water";

    std::cout << "X: " << &x << '\n';
    std::cout << "Y: " << &y << '\n';
    swap(x, y); // pass by value
    // std::cout << "X: " << x << '\n';
    // std::cout << "Y: " << y << '\n';
    return 0;
}
void swap(std::string &x, std::string &y)
{
    std::string temp;
    temp = x;
    x = y;
    y = temp;
    std::cout << "X: " << &x << '\n';
    std::cout << "Y: " << &y << '\n';
}