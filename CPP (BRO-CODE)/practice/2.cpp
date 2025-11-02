#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numGuests;
    cout << "How many guests? ";
    cin >> numGuests;

    string *guests = new string[numGuests];
    cin.ignore();

    // Enter guest names
    for (int i = 0; i < numGuests; i++)
    {
        cout << "Enter name for guest " << (i + 1) << ": ";
        getline(cin, guests[i]); // Read the full name (including spaces)
    }

    // Show all guests
    cout << "\nGuests checked in:\n";
    for (int i = 0; i < numGuests; i++)
    {
        cout << guests[i] << "\n";
    }

    delete[] guests; // Clean up memory

    return 0;
}