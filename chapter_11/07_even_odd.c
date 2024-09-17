#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    
    // Allocate memory to store the first 5 odd numbers
    arr = (int *)malloc(5 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    
    // Storing the first 5 odd numbers
    for (int i = 0; i < 5; i++) {
        arr[i] = 2 * i + 1;
    }

    // Print the odd numbers
    printf("First 5 odd numbers:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Reallocate memory to store the first 6 even numbers
    arr = (int *)realloc(arr, 6 * sizeof(int));           // ham sirf malloc and calloc wale memory ko he reallocate kar sakte h
    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }
    
    // Storing the first 6 even numbers
    for (int i = 0; i < 6; i++) {
        arr[i] = 2 * i;
    }

    // Print the even numbers
    printf("First 6 even numbers:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Free the allocated memory
    free(arr);

    return 0;
}
