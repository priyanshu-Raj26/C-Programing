#include <stdio.h>
#include <string.h>

void removeSpaces(char str[]) {
    int i, j = 0;
    char temp[100]; // Temporary array to hold the new string without spaces

    for (i = 0; str[i] != '\0'; i++) {
        // If the character is not a space, add it to the temporary string
        if (str[i] != ' ') {
            temp[j++] = str[i];
        }
    }
    temp[j] = '\0'; // Null-terminate the new string
    strcpy(str, temp); // Copy the modified string back to the original
}

int main() {
    char str[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin); // Read input from the user
    str[strcspn(str, "\n")] = 0; // Remove the newline character

    removeSpaces(str); // Call the function to remove spaces

    printf("String after removing spaces: '%s'\n", str);
    return 0;
}
