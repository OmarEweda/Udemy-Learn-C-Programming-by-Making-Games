/*Problem 2: Write a program to read elements in array and copy all elements of first array into second array.*/

#include <iostream>


void copyArray (const int src[], int dest [], int size){
    for(int i = 0; i < size; ++i){
        dest[i] = src[i]; 
    }
}
int main() {
    int size = 4;
    int arr1[] = {1,2,3,4};
    int arr2[size];
    copyArray(arr1, arr2, size);
    std::cout << "Copied array is [ ";
    for(int i = 0; i < size; ++i){
        std::cout << arr2[i] << " "; 
    }

    std::cout << "] " << std::endl;
    return 0;
}
