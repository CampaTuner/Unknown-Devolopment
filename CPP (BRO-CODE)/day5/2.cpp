#include <iostream>
#include <string>
enum Day
{
    sunday = 1,
    monday = 2,
    tuesday = 3,
    wednesday = 4,
    thursday = 5,
    friday = 6,
    saturday = 7
};
enum Color
{
    red,
    green,
    blue,
    yellow
}; // red = 0, green = 1, blue = 2, yellow = 3 ( by default )
using namespace std;

int main()
{
    // enums = a user-defined data type that consists
    //         of paired named-integer constants.
    //         GREAT if you have a set of potential options

    Day today = friday;

    switch (today)
    {
    case 1:
        cout << "It's Sunday! Time to relax!" << '\n';
        break;
    case 2:
        cout << "It's Monday! Back to work!" << '\n';
        break;
    case 3:
        cout << "It's Tuesday! At least it's not Monday!" << '\n';
        break;
    case 4:
        cout << "It's Wednesday! Halfway through the week!" << '\n';
        break;
    case 5:
        cout << "It's Thursday! Almost the weekend!" << '\n';
        break;
    case 6:
        cout << "It's Friday! The weekend is near!" << '\n';
        break;
    case 7:
        cout << "It's Saturday! Enjoy your day!" << '\n';
        break;
    default:
        cout << "Invalid day!" << '\n';
        break;
    }
    return 0;
}