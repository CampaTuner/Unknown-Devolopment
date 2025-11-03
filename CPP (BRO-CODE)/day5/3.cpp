#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
    string name = "Rick";
    string occupation = "scientist";
    int age = 70;

    void eat()
    {
        cout << "This Person is eating\n";
    }
    void drink()
    {
        cout << "This Person is drinking\n";
    }
    void sleep()
    {
        cout << "This Person is sleeping\n";
    }
};

int main()
{

    Human human1;
    human1.name = "Rounak";
    human1.occupation = "scientist";
    human1.age = 20;

    cout << human1.name << '\n';
    cout << human1.occupation << '\n';
    cout << human1.age << '\n';
    human1.eat();
    human1.drink();
    human1.sleep();

    return 0;
}