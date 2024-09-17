#include <stdio.h>

int main() {
    printf("Demonstration of escape sequence characters in C:\n");

    // Space character (not explicitly visible)
    printf("This is a space character: 'Hello World'\n");

    // Tab character
    printf("This is a tab character:\n");
    printf("Column1\tColumn2\tColumn3\n");
    printf("Data1\tData2\tData3\n");

    // Newline character
    printf("\nThis is a newline character:\n");
    printf("First line\nSecond line\n");

    // Carriage Return character
    printf("\nThis is a carriage return character:\n");
    printf("Hello World\rGoodbye World\n"); // "Hello World" will be overwritten by "Goodbye World"

    // Backslash character
    printf("\nThis is a backslash character:\n");
    printf("Path: C:\\Program Files\\Example\n");

    // Single quote character
    printf("\nThis is a single quote character:\n");
    printf("It's easy to include single quotes in strings.\n");

    // Double quote character
    printf("\nThis is a double quote character:\n");
    printf("He said, \"Hello, World!\"\n");

    // Backspace character (non-visible in most output)
    printf("\nThis is a backspace character:\n");
    printf("Hello\bWorld\n"); // 'o' in "Hello" will be erased, displaying "HellWorld"

    // Form feed character (not widely used in modern systems)
    printf("\nThis is a form feed character:\n");
    printf("Hello\fWorld\n"); // May not produce visible result in many terminals

    return 0;
}
