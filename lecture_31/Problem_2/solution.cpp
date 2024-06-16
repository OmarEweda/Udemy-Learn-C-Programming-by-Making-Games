#include <iostream>
#include <algorithm> 

int main() {
    int num1, num2, num3;

    std::cout << "Enter three numbers: " << std::endl;
    std::cin >> num1 >> num2 >> num3;

    int biggest = std::max({num1, num2, num3});
    int smallest = std::min({num1, num2, num3});

    std::cout << "The biggest number is: " << biggest << std::endl;
    std::cout << "The smallest number is: " << smallest << std::endl;

    return 0;
}
