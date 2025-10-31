#include <iostream>

int main(){
    // ternary operator

    3 < 4 ? std::cout << false << std::endl: std::cout << true << std::endl;
    int num = 13;
    num % 2 == 1 ? std::cout << "Odd" << std::endl: std::cout << "Even" << std::endl;
    std::cout << (num % 2 == 1 ? "Odd" : "Even") << std::endl;

    // int b;
    // std::cout << b << std::endl;
    return 0;
}