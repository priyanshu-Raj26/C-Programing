// allocate memory for 500 integer using calloc & then store first 500 natural number in  that space
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr;
    int i;

    // Allocate memory for 500 integers using calloc
    ptr = (int *)calloc(500, sizeof(int));

    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // Store the first 500 natural numbers in the allocated memory
    for (i = 0; i < 500; i++) {
        ptr[i] = i + 1;
    }

    // Optionally, print the numbers to verify
    for (i = 0; i < 500; i++) {
        printf("%d\t ", ptr[i]);
    }

    // Free the allocated memory
    free(ptr);

    return 0;
}
