#include <iostream>
#include <string>
using namespace std;

/*
 * 🧱 CLASS: MyClass
 * Demonstrates:
 *  - Attributes (data members)
 *  - Constructor Overloading
 *  - Defining constructors & methods inside and outside class
 *  - Code clarity and documentation
 */
class MyClass
{
public:
    // 🧩 Attributes (class variables)
    int myNum;
    int num2;
    string myString;

    // 🏗️ Constructor #1 → Parameterized (int + string)
    MyClass(int x, string y)
    {
        myNum = x;
        myString = y;
        num2 = 0; // give a default for num2
    }

    // 🏗️ Constructor #2 → Parameterized (int + int)
    // Declared here, defined outside class
    MyClass(int x, int y);

    // 🧱 Constructor #3 → Default Constructor
    MyClass()
    {
        myNum = 0;
        num2 = 0;
        myString = "UNKNOWN";
    }

    // 💬 Method defined inside the class
    void myMethod()
    {
        cout << "Object Info → myNum: " << myNum
             << " | num2: " << num2
             << " | myString: " << myString << endl;
    }

    // 🔧 Declaration (method will be defined outside)
    void myMethod2();
};

// 🏗️ Constructor definition outside the class (int + int)
MyClass::MyClass(int x, int y)
{
    myNum = x;
    num2 = y;
    myString = "No String";
}

// 💬 Method definition outside the class using scope resolution (::)
void MyClass::myMethod2()
{
    cout << "This is myMethod2 → defined outside the class" << endl;
}

int main()
{
    // 🧠 Object 1 — uses constructor (int, string)
    MyClass obj1(15, "ABC");

    // 🧠 Object 2 — uses constructor (int, int)
    MyClass obj2(10, 20);

    // 🧠 Object 3 — uses default constructor (no arguments)
    MyClass obj3;

    // 🧾 Display results using methods
    cout << "\n--- Object Details ---\n";
    obj1.myMethod();
    obj2.myMethod();
    obj3.myMethod();

    // 🔧 Call method defined outside the class
    cout << "\n--- External Method ---\n";
    obj1.myMethod2();

    return 0;
}
