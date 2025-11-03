#include <iostream>
using namespace std;

int main() {
    try {
        int a = 3;
        int b = 0;

        if (b == 0) {
            throw runtime_error("Division by zero is not allowed!");
        }

        cout << "Output: " << a / b << endl;
    }
    catch (const exception &e) {
        cerr << "Error: " << e.what() << endl;
    }
    return 0;
}
