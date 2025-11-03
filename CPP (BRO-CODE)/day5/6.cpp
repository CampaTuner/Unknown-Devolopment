#include <iostream>
#include <string>
using namespace std;
class Animal
{
public:
    bool alive = true;

    void eat()
    {
        cout << "This animal is eating\n";
    }
};
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "The dog goes woof\n";
    }
    void eat()
    {
        cout << "This dog is eating\n";
    }
};
class Cat : public Animal
{
public:
    void meow()
    {
        cout << "The dog goes meaw\n";
    }
};

int main()
{

    // inheritance
    Dog dog;
    Cat cat;
    cout << dog.alive << '\n';
    dog.bark();
    dog.eat();
    cout << cat.alive << '\n';
    cat.meow();
    cat.eat();

    return 0;
}