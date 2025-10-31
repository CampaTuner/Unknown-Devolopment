#include <iostream>

int main()
{

    int students = 20;
    // students = students + 1;
    // students += 1;
    // students++;

    // students = students - 1;
    // students -= 1;
    // students--;

    // students = students * 2;
    // students *= 2;

    // students = students / 2;
    // students /= 2;

    int rem = students % 2;
    std::cout << rem;

    // parenthesis > mul & div > add & sub
    int ans = 6 - 5 + 4 * 3 / 2;
    std::cout << ans;

    std::cout << students;

    return 0;
}