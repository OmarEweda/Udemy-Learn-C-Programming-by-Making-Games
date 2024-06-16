/*Problem 3: Write a program that enters 3 sides of a triangle checks whether the triangle is valid or not.
Remember that a triangle is valid if and only if the sum of any two sides is greater than the third side.*/

#include <iostream>

int main()
{   
    int side1, side2, side3;

    std::cout << "Enter three sides: " << std::endl;
    std::cin >> side1 >> side2 >> side3;

    if(side1 + side2 > side3 ||
       side2 + side3 > side1 ||
       side3 + side1 > side2)
    {
        std::cout <<"Valid Triangle"<<std::endl;
    }
    else
    {
        std::cout <<"Invalid Triangle"<<std::endl;
    }
    return 0;
}