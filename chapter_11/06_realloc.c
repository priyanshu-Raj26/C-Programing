// allocate memory for 5 numbers. Then dynamically increase it to 8 numbers?
#include <stdio.h>
#include <stdlib.h>

int main() {
    // Step 1: Allocate memory for 5 integers
    int *arr = (int *)malloc(5 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Step 2: Assign values to the first 5 elements
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    // Step 3: Dynamically increase memory to 8 integers
    arr = (int *)realloc(arr, 8 * sizeof(int));

    if (arr == NULL) {
        printf("Memory reallocation failed\n");
        return 1;
    }

    // Step 4: Assign values to the new elements
    for (int i = 5; i < 8; i++) {
        arr[i] = i + 1;
    }

    // Step 5: Print all 8 elements
    for (int i = 0; i < 8; i++) {
        printf("%d ", arr[i]);
    }

    // Step 6: Free the allocated memory
    free(arr);

    return 0;
}
