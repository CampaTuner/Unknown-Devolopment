#include <iostream>
#include <string>
using namespace std;

class Student
{
public:
    string name;
    int age;
    double gpa;
    int sem;

    Student(string name, int age, double gpa)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
    // constructor overload
    Student(string name, int age, double gpa, int sem)
    {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
        this->sem = sem;
    }
};

int main()
{
    //  constructor
    Student student1("Rounak", 20, 8.9);
    Student student2("Rajdeep", 23, 7.3,  6);

    cout << student1.name << '\n';
    cout << student1.age << '\n';
    cout << student1.gpa << '\n';

    cout << student2.name << '\n';
    cout << student2.age << '\n';
    cout << student2.gpa << '\n';
    cout << student2.sem << '\n';

    return 0;
}