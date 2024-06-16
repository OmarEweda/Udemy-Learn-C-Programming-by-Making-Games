/*Problem 2: Write a program to print ASCII values of all characters using for loop.*/

#include <iostream>

int main() {
    for (int i = 0; i <= 255; ++i) {
        std::cout << "ASCII value of character '" << static_cast<char>(i) << "' is " << i << std::endl;
    }

    return 0;
}
