#include <iostream>

int main()
{
    // Memory address = a location in memory where data is stored
    // a memory address can accessed with & (address-of operator)

    std::string name = "Bro";
    int age = 21;
    bool student = true;

    std::cout << &name << '\n';
    std::cout << &age << '\n';
    std::cout << &student << '\n';

    std::cout << *(&name) << '\n';
    std::cout << *(&age) << '\n';
    std::cout << *(&student) << '\n';

    return 0;
}
// 4:00:30
// https://www.youtube.com/watch?v=-TkoO8Z07hI&t=14430s