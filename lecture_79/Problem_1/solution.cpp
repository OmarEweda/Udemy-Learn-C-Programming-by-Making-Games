/*  Problem: Create a dynamic array of integers that can be resized every time the array is full. 
There should be 5 functions that will be used with this dynamic array:

int * CreateDynamicArray(int capacity, int& size);

This will do the first creation of the dynamic array based on the capacity passed in to the CreateDynamicArray function. 
Size should be set to 0

void DeleteDynamicArray(int* dynamicArray, int &size);

DeleteDynamicArray will actually delete the memory created by CreateDynamicArray. 
Size should be set to 0

void InsertElement(int** dynamicArray, int element, int & size, int& capacity);

InsertElement will add a new element to the end of the array and increase the size by 1. 
It should return false if it doesn't have the capacity to add the new element and true otherwise.

void DeleteElement(int* dynamicArray, int elementIndex, int & size);

DeleteElement will remove the element at elementIndex. 
There should be no empty spaces between elements. The dynamic array should not be resized.

void ResizeDynamicArray(int** dynamicArray, int size, int newCapacity);

ResizeDynamicArray should resize the array to be newCapacity. 
All the previous elements in the dynamic array should remain in tact and in the order they were in beforehand. 

Make sure there are no memory leaks anywhere in the code!*/

#include <iostream>


int * CreateDynamicArray(int capacity, int& size);
void DeleteDynamicArray(int* dynamicArray, int &size);
void InsertElement(int** dynamicArray, int element, int & size, int& capacity);
void DeleteElement(int* dynamicArray, int elementIndex, int & size);
void ResizeDynamicArray(int** dynamicArray, int size, int newCapacity);


int main() {
    int capacity, size;
    int element, position, deleteIndex;

    // Get the capacity of the array
    std::cout << "Enter the capacity of the array: ";
    std::cin >> capacity;

    // Create the dynamic array with the given capacity
    int* arr = CreateDynamicArray(capacity, size);

    // Get the number of elements to be initially inserted (must be <= capacity)
    std::cout << "Enter the number of elements to initially insert (must be <= " << capacity << "): ";
    int initialSize;
    std::cin >> initialSize;

    if (initialSize > capacity) {
        std::cout << "Initial size exceeds capacity!" << std::endl;
        delete[] arr;
        return 1;
    }

    // Input initial elements in the array
    std::cout << "Enter " << initialSize << " elements of the array: ";
    for (int i = 0; i < initialSize; i++) {
        std::cin >> arr[i];
        size++;
    }

    std::cout << "Enter the element to be inserted: ";
    std::cin >> element;


    InsertElement(&arr, element, size, capacity);

    // Print the array after insertion
    std::cout << "Array after insertion: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Get the index of the element to be deleted
    std::cout << "Enter the index of the element to be deleted: ";
    std::cin >> deleteIndex;

    // Call the function to delete the element
    DeleteElement(arr, deleteIndex, size);

    // Print the updated array
    std::cout << "Array after deletion: ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Resize the dynamic array
    int newCapacity;
    std::cout << "Enter the new capacity for the array: ";
    std::cin >> newCapacity;

    ResizeDynamicArray(&arr, size, newCapacity);

    // Print the array after resizing
    std::cout << "Array after resizing (with new capacity " << newCapacity << "): ";
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    // Free the dynamically allocated memory
    delete[] arr;

    return 0;
}

int * CreateDynamicArray(int capacity, int& size){
    size = 0;
    int* dArry = new int [capacity];
    std::cout << "Dynamic array has benn allocated with capacity = " << capacity << " and size = " << size << std::endl;
    return dArry;
}

void DeleteDynamicArray(int* dynamicArray, int &size){
    size = 0;
    delete [] dynamicArray;
}

void InsertElement(int** dynamicArray, int element, int & size, int& capacity){
    if(size < capacity){
        (*dynamicArray)[size] = element;
        size++;
        return;
    }

}

void DeleteElement(int* dynamicArray, int elementIndex, int & size){
    if (elementIndex < 0 || elementIndex >= size) {
        std::cout << "Invalid index!" << std::endl;
        return;
    }

    for (int i = elementIndex; i < size - 1; i++) {
        dynamicArray[i] = dynamicArray[i + 1];
    }

    size--;
}

void ResizeDynamicArray(int** dynamicArray, int size, int newCapacity){

    int* newArray = new int[newCapacity];

    for (int i = 0; i < size; i++) {
        newArray[i] = (*dynamicArray)[i];
    }

    delete[] *dynamicArray;

    *dynamicArray = newArray;
}