/*Problem: Write a function called swap that takes in two integers by pointer and swaps their values.*/

#include <cstddef>
#include <iostream>

void intSwap (int* a, int* b){
    if(a != NULL && b != NULL){
        int temp = *a ;
        *a = *b; 
        *b = temp; 
    }
    else{
        std::cout << "Invalid pointers." << std::endl;
    }
}


int main()
{   
    int A = 5;
    int B = 7;
    std::cout << "First integer before swap = "<< A << " and second integer = "<< B << std::endl;
    intSwap(&A, &B);
    std::cout << "First integer after swap = "<< A << " and second integer = "<< B << std::endl;
    return 0;
}