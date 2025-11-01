#include <iostream>

int main()
{
    // sort array
    int numbers[] = {10, 1, 3, 2, 5, 4, 8, 7, 6, 9};
    int size = sizeof(numbers) / sizeof(numbers[0]);

    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - 1; j++)
        {
            if (numbers[j] > numbers[j + 1])
            {
                int temp = numbers[j];
                numbers[j] = numbers[j + 1];
                numbers[j + 1] = temp;
            }
        }
    }

    for (int i : numbers)
    {
        std::cout << i << " ";
    }

    return 0;
}