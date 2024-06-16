/*Problem 1: Write a program to read binary number from user and find the one's complement of that binary number.*/

#include <iostream>
#include <string>

bool isBinary(const std::string & binary)
{
    for(char ch: binary)
    {
        if(ch != '0' &&
           ch != '1')
        {
            std::cout << "Input is Invalid" << std::endl;
            return 0;
        }
        std::cout << "Input is Valid" << std::endl;
        return 1;
    }
}

std::string oneComp(const std::string & binary)
{
    std::string oneComp = "";
    for(char ch: binary)
    {
        oneComp += (ch == '0' ? '1' : '0');
    }
    return oneComp;
}

int main()
{   
    std::string input;
    std::cout << "Please enter Binary number" << std::endl;
    std::cin >> input;

    if(isBinary(input)){
        std::cout << "One's Comp = " << oneComp(input) << std::endl; 
    }
    
    return 0;
}