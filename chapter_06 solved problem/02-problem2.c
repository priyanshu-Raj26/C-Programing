#include <stdio.h>

int main() {
    char c = 'A';  // Start with 'A'
    char *ptr = &c;  // Pointer to the variable c

    printf("The English alphabet:\n");
    while (*ptr <= 'Z') {
        printf("%c ", *ptr);  // Print the current character
        (*ptr)++;  // Increment the value of the character
    }

    printf("\n");
    return 0;
}
