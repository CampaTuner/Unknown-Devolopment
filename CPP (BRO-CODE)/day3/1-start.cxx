#include <iostream>

// function declaration
void happyBirthday(std::string name, int age);
double square(double length);
std::string concatString(std::string str1, std::string str2);

int main()
{
    std::string name = "Rounak";
    int age = 20;
    // happyBirthday(name, age);

    double length = 5.0;
    // std::cout << square(length);

    std::string firstName = "Rounak";
    std::string lastName = "Basak";
    std::cout << concatString(firstName, lastName);
    return 0;
}
// function defination
std::string concatString(std::string str1, std::string str2)
{
    return str1 + " " + str2;
}
double square(double length)
{
    double result = length * length;
    return result;
}
void happyBirthday(std::string name, int age)
{
    std::cout << "Happy Birthday to you " << name << std::endl;
    std::cout << "You are " << age << " Years old!";
}