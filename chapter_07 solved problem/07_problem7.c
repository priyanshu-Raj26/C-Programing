#include <stdio.h>

void insertAtEnd(int arr[], int size, int element);

int main() {
    int arr[10] = {1, 2, 3, 4, 5}; // Predefined array with some elements
    int size = 5; // Current number of elements in the array

    int element = 6; // Element to be inserted

    insertAtEnd(arr, size, element);
    size++; // Increment size after insertion

    // Print the updated array
    for (int i = 0; i < size; i++) {
        printf("%d \t", arr[i]);
    }

    return 0;
}

void insertAtEnd(int arr[], int size, int element) {
    arr[size] = element; // Insert the element at the end of the array
}
