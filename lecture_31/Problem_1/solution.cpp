/*Problem 1: Write a program that inputs a character and outputs whether or not it is in the alphabet or not.*/

#include <iostream>
#include <cctype>

int main()
{   
    char input;
    bool flag = false;

    std::cout << "Please enter char" << std::endl;
    std::cin >> input;

    if(isalpha(input))
    {
        std::cout << "Character is Alpha" << std::endl;
    }
    else
    {
        std::cout << "Character is not Alpha" << std::endl;
    }

    return 0;
}