/*Problem 5: Write a program to print the diamond star(*) pattern based on an input number.
   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <iostream>

int main() {
    int rows;
    std::cout << "Enter number of rows" << std::endl; 
    std::cin >> rows;

    for(int i = 0; i <= (rows/2); ++i){
        for(int j = 0; j < (rows/2)-i; ++j){
            std::cout << " ";
        }
        for(int j = 0; j < ((i*2)+1); ++j){
            std::cout << "*";
        }
        std::cout << std::endl;
    }

    for(int i = (rows/2); i >= 1 ; --i){
        for(int j = 1; j <= (rows/2) + 1 -i; ++j){
            std::cout << " ";
        }
        for(int j = 1; j <= (i * 2 - 1); ++j){
            std::cout << "*";
        }
        std::cout << std::endl;
    } 

    return 0;
}
