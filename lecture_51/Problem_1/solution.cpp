/*Problem 1: Write a function that takes in an integer and returns true if the integer is a prime number.*/

#include <iostream>

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


int main()
{   
    int input;
    std::cout << "Please enter number" << std::endl;
    std::cin >> input;

    if(isPrime(input)){
        std::cout << "Number is prime"<< std::endl; 
    }
    else{
        std::cout << "Number is not prime"<< std::endl;
    }
    
    return 0;
}