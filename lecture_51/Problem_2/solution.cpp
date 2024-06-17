/*Problem 2: Write a program to print ASCII values of all characters using for loop.*/

#include <iostream>
#include <vector>
#include <cmath>

bool isPrime(const int & num)
{
    bool flag = true;
    
    for(int i = 2; i < num/2; ++i)
    {
        if(!(num % i))
        {
            flag = false;
            break;
        }
    }
    return flag;
}

std::vector<int> findPrimes(int lower, int upper) {
    std::vector<int> primes;
    for (int i = lower; i <= upper; ++i) {
        if (isPrime(i)) {
            primes.push_back(i);
        }
    }
    return primes;
}

int main() {
    int lower, upper;

    std::cout << "Input lower limit: " << std::endl;
    std::cin >> lower;
    std::cout << "Input upper limit: " << std::endl;
    std::cin >> upper;

    std::vector<int> primes = findPrimes(lower, upper);

    std::cout << "Prime numbers between " << lower << " and " << upper << " are: ";
    for (size_t i = 0; i < primes.size(); ++i) {
        std::cout << primes[i];
        if (i != primes.size() - 1) {
            std::cout << ", ";
        }
    }
    std::cout << std::endl;

    return 0;
}
