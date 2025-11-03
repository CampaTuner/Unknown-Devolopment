#include <iostream>
#include <string>
using namespace std;

struct student
{
    string name;
    double gpa;
    bool enrolled = true;
};
struct Car
{
    string model;
    int year;
    string color;
};

void printCar(Car &car);
int main()
{
    // struct = A Structure that group related variables under one name.
    //          structs can contain many different data types (int, string, float, etc.)
    //          variable in a struct are called "members"
    //          members are accessed using the dot operator (.) "class Member Access Operator"

    // student student1;
    // student1.name = "Rounak";
    // student1.gpa = 3.2;
    // student1.enrolled = true;

    // cout << student1.name << '\n';
    // cout << student1.gpa << '\n';
    // cout << student1.enrolled << '\n';

    Car car1;
    Car car2;

    car1.model = "Mustang";
    car1.year = 2023;
    car1.color = "red";

    car2.model = "Corvette";
    car2.year = 2024;
    car2.color = "blue";

    cout << &car1 << '\n';
    printCar(car1);
    cout << &car2 << '\n';
    printCar(car2);

    return 0;
}

void printCar(Car &car)
{
    cout << &car << '\n';
    cout << car.model << '\n';
    cout << car.year << '\n';
    cout << car.color << '\n';
}