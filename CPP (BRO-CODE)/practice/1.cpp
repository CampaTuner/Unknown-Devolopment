#include <iostream>

int main()
{

    int age = 10;
    int &ptr = age;


    std::cout << age << '\n';
    std::cout << ptr << '\n';

    std::cout << &age << '\n';
    std::cout << &ptr << '\n';

    ptr = 11;

    std::cout << age << '\n';
    std::cout << ptr << '\n';

    std::cout << &age << '\n';
    std::cout << &ptr << '\n';



    return 0;
}