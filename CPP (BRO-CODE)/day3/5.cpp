#include <iostream>

int main()
{
    // Array
    // std::string car[3];
    std::string car[] = {"toyota", "swift", "Alto"};
    car[0] = "Camaro";
    std::cout << car[0] << std::endl;
    std::cout << car[1] << std::endl;
    std::cout << car[2] << std::endl;

    double gpa = 2.5;
    std::string name = "Rounak";
    char grade = 'A';
    bool student = false;

    std::cout << sizeof(gpa) << std::endl;
    std::cout << sizeof(name) << std::endl;
    std::cout << sizeof(grade) << std::endl;
    std::cout << sizeof(student) << std::endl;
    std::cout << sizeof(car) << std::endl;
    std::cout << "Elements in cars are: " << sizeof(car) / sizeof(std::string) << std::endl;
    return 0;
}