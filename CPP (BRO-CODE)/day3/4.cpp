#include <iostream>
#include <iomanip>
#include <limits> // for std::numeric_limits

void showBalance(double balance);
double deposit();
double withdraw(double balance);
int main()
{
    double balance = 0;
    int choice = 0;

    do
    {
        std::cout << "1. Show Balance\n";
        std::cout << "2. Deposit Money\n";
        std::cout << "3. Withdraw Money\n";
        std::cout << "4. Exit\n";

        if (!(std::cin >> choice))
        {
            std::cin.clear();                                                   // clear error flag
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // discard invalid input
            std::cout << "Invalid input! Please enter a number.\n";
            continue; // restart loop
        }

        switch (choice)
        {
        case 1:
            showBalance(balance);
            break;
        case 2:
            balance += deposit();
            showBalance(balance);
            break;
        case 3:
            balance -= withdraw(balance);
            showBalance(balance);
            break;
        case 4:
            std::cout << "Thanks for visiting";
            break;
        default:
            std::cout << "Invalid Choice\n";
            break;
        }
    } while (choice != 4);

    return 0;
}
void showBalance(double balance)
{
    std::cout << "Your Bank Balance is $" << std::setprecision(2) << std::fixed << balance << std::endl;
}
double deposit()
{
    double amount = 0;
    std::cout << "Enter amount to be deposited: ";
    std::cin >> amount;
    if (amount > 0)
    {
        return amount;
    }

    std::cout << "Thats not a valid Amount!\n";
    return 0;
}
double withdraw(double balance)
{
    double amount = 0;
    std::cout << "Enter amount to be withdrawn: ";
    std::cin >> amount;
    if (amount > balance)
    {
        std::cout << "Insufficient Funds\n";
        return 0;
    }
    else if (amount < 0)
    {
        std::cout << "Thats not a valid Amount!\n";
        return 0;
    }

    return amount;
}