#include <iostream>

// int max(int x, int y)
// {
//     return (x > y) ? x : y;
// }
// double max(double x, double y)
// {
//     return (x > y) ? x : y;
// }
// char max(char x, char y)
// {
//     return (x > y) ? x : y;
// }
// use this ->
template <typename Thing, typename AnotherThing>
auto max(Thing x, AnotherThing y)
{
    return (x > y) ? x : y;
}

int main()
{
    // function template = describes what a funtion looks like.
    //                     Can be used to generate as many overloaded functions
    //                     as needed, each using different data types

    // std::cout << max(1, 3) << '\n';
    // std::cout << max(1.4, 0.5) << '\n';
    // std::cout << max('1', '3') << '\n';
    std::cout << max(1, 2.1) << '\n'; //
    return 0;
}
// 5:03:50
// https://www.youtube.com/watch?v=-TkoO8Z07hI&t=18230s