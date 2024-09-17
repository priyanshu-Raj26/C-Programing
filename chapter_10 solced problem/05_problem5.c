#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];

    // Open the file in read mode
    file = fopen("input.txt", "r");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Read a single line from the file
    fgets(buffer, 100, file);

    // Output the read string
    printf("Read from file: %s", buffer);

    // Close the file
    fclose(file);

    return 0;
}
