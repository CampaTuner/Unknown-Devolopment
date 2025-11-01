#include <iostream>

int main()
{
    std::string students[] = {"Spongebob", "Patrick", "Squidward", "Sandy", "Hallowen"};
    // for (int i = 0; i < sizeof(students) / sizeof(std::string); i++)
    // {
    //     std::cout << students[i] << "\n";
    // }

    for (std::string student : students)
    {
        std::cout << student << std::endl;
    }

    return 0;
}