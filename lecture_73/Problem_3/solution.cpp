/*Problem 3: Write a program to insert an element in array at specified position.*/

#include <iostream>

void insertElement(int arr[], int& n, int element, int position) {
        if (position < 0 || position > n) {
        std::cout << "Invalid position!" << std::endl;
        return;
    }

    for (int i = n; i > position; i--) {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;

    n++;
}

int main() {
    int n, element, position;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n + 1];

    std::cout << "Enter " << n << " elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the element to be inserted: ";
    std::cin >> element;

    std::cout << "Enter the position (0-based index) where the element should be inserted: ";
    std::cin >> position;

    insertElement(arr, n, element, position);

    std::cout << "Array after insertion: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
