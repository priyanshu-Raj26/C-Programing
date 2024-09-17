// what is a dangling pointer in c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int));  // dynamically allocate memory
    *ptr = 42;  // assign a value

    free(ptr);  // deallocate memory

    // ptr is now a dangling pointer
    printf("%d\n", *ptr);  // undefined behavior

    return 0;
}
