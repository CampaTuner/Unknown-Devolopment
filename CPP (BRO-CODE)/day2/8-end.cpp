#include <iostream>

int main()
{
    //  pseudo-random = NOT truly random (but close)

    int guess;
    int tries = 0;

    srand(time(NULL));
    int num = (rand() % 100) + 1;

    do
    {
        std::cout << "Enter a Guess (1-100): ";
        std::cin >> guess;
        if (guess > num)
        {
            std::cout << "Too high!\n";
        }
        else
        {
            std::cout << "Too Low!\n";
        }
        tries += 1;

    } while (num != guess);

    std::cout << "You Win! in " << tries << " Times";

    return 0;
}
// 2:03:10