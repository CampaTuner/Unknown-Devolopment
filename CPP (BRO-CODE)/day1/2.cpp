#include <iostream>

int main(){

    int x; // declaration
    x = 5;
    int y = 10;
    // std::cout << x;


    // integer (whole nuber)
    int age = 21;
    int year = 2025;
    int days = 5;

    // double (number including decimal)
    double price = 10.89;
    double gpa = 2.4;
    double temparature = 23.4;

    // single character
    char grade = 'A';
    char initial = 'B';
    char currency = '$';

    // boolean (true or false)
    bool student = false;
    bool power = true;
    bool forSale = false;

    //  String (Object that represents a sequence of text)
    std::string name = "Bro";
    std::string day = "Friday";
    std::string food = "Pizza";

    std::cout << "Hello " << name << "! Today is " << day << "\n";
    std::cout << "Your Favourite food is " << food << "?";

    return 0;
}