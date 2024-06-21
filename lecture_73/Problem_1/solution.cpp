/*Problem 1: Write a function that will reverse a C String. For example if the string was "Hello" it should be reversed to "olleH"*/

#include <cstring>
#include <iostream>

void stringReverse(const char ch []){
    int size = strlen(ch);
    char reversed [size];
    for (int i = 0; i < size; ++i)
    {
        reversed [i] = ch [size - i - 1];
    }
    reversed[size] = '\0';
    char* cPtr = &reversed[0];

    while(*cPtr != '\0'){
        std::cout << *cPtr;
        cPtr++;
    }

    std::cout << std::endl;
}

int main()
{  
    char name [] = "Hello";


    stringReverse(name);
    return 0;
}