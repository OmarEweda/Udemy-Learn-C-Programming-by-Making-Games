/*Problem 3: Write a program to count frequency of digits in an integer.*/

#include <iostream>
#include <string>

int main() {
    int number;
    int digit_count[10] = {0};

    std::cout << "Enter an integer number: " << std::endl;
    std::cin >> number;

    while (number) {
        int digit = number % 10;
        digit_count[digit]++;
        number /= 10;
    }

    // Output frequency of each digit
    std::cout << "Digit frequencies in the number: " << number << std::endl;
    for (int i = 0; i < 10; ++i) {
        if (digit_count[i] > 0) {
            std::cout << "Digit " << i << ": " << digit_count[i] << " times" << std::endl;
        }
    }

    return 0;
}
