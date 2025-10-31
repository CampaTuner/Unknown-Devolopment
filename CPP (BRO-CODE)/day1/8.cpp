#include <iostream>
typedef std::string text_t;
int main()
{

    // cout << (insertion operator)
    // cin >> (extraction operator)

    text_t name;
    int age;
    std ::cout << "What's your age?: ";
    std::cin >> age;

    std ::cout << "What's your name?: ";
    std::getline(std::cin >> std::ws, name);
    

    std::cout << "Your name is " << name << '\n';
    std::cout << "Your age is " << age;

    return 0;
}