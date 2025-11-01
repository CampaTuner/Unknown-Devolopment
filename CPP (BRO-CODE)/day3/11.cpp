#include <iostream>

int main()
{

    std::string foods[5];
    int size = sizeof(foods) / sizeof(foods[0]);

    for (int i = 0; i < size; i++)
    {
        std::cout << "Enter a food you like or 'q' to quit #" << i << ": ";
        std::string temp;
        std::getline(std::cin, temp);
        if (temp == "q")
        {
            break;
        }
        else
        {
            foods[i] = temp;
        }
    }

    for (int j = 0; !foods[j].empty(); j++)
    {
        std::cout << foods[j] << "\n";
    }

    return 0;
}