/*Problem 2: Write a program that takes a floating point number and outputs the minimum amount of currency denominations needed to make up that number. 
Eg. If the user input 45.78 then the output would be:
4 ten dollar bills
1 five dollar bills
0 two dollar bills
0 one dollar bills
3 twenty five cent pieces
0 ten cent pieces
0 five cent pieces
3 one cent pieces
*/

#include <iostream>
#include <cmath>

int main() {
    double amount;
    int dollars, cents;
    int tenDollarBills, fiveDollarBills, twoDollarBills, oneDollarBills;
    int quarters, dimes, nickels, pennies;

    std::cout << "Enter the amount: " << std::endl;
    std::cin >> amount;

    dollars = static_cast<int>(amount);
    cents = static_cast<int>((amount - dollars) * 100);

    tenDollarBills = dollars / 10;
    dollars %= 10;

    fiveDollarBills = dollars / 5;
    dollars %= 5;

    twoDollarBills = dollars / 2;
    dollars %= 2;

    oneDollarBills = dollars;

    quarters = cents / 25;
    cents %= 25;

    dimes = cents / 10;
    cents %= 10;

    nickels = cents / 5;
    cents %= 5;

    pennies = cents;

    // Output the result
    std::cout << tenDollarBills << " ten dollar bills\n" << std::endl;
    std::cout << fiveDollarBills << " five dollar bills\n" << std::endl;
    std::cout << twoDollarBills << " two dollar bills\n" << std::endl;
    std::cout << oneDollarBills << " one dollar bills\n" << std::endl;
    std::cout << quarters << " twenty five cent pieces\n" << std::endl;
    std::cout << dimes << " ten cent pieces\n" << std::endl;
    std::cout << nickels << " five cent pieces\n" << std::endl;
    std::cout << pennies << " one cent pieces\n" << std::endl;

    return 0;
}
