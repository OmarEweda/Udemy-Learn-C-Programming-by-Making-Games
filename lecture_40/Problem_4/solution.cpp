/*Problem 4: Write a program to enter any number and check whether given number is palindrome or not using a for loop. Eg 121 would be a palindrome.*/

#include <iostream>
#include <string>

int main()
{   
    int input, size;
    std::cout << "Please enter number and size" << std::endl;
    std::cin >> input >> size;

    std::string num = std::to_string(input); 

    for(int i = 0; i < (size /2); ++i){
        if(num.front() + i  != num.back() - i){
            std::cout << "number is not palindrome" << std::endl;
            return 0;
        }
    }
    std::cout << "number is palindrome" << std::endl;
    return 0;
}