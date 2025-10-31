#include <iostream>

int main()
{

    std::string name;
    std::cout << "Enter your name: ";
    std::getline(std::cin, name);

    // name.clear();
    std::cout << "Length of your name is: " << name.length() << std::endl;
    std::cout << "is your name empty: " << (name.empty() ? "Yes" : "No") << std::endl;
    std::cout << "your email is: " << name.append("@gmail.com") << std::endl;
    std::cout << "your First Character is: " << name.at(0) << std::endl;
    name.insert(0, "#");
    std::cout << "your username is: " << name << std::endl;
    std::cout << "B is in position: " << name.find("B") << std::endl;

    name.erase(7, name.length());

    std::cout << "our final name is: " << name << std::endl;

    return 0;
}
