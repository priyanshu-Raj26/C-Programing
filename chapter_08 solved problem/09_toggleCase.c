#include <stdio.h>

// Function to toggle case of characters in the string
void toggleCase(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 'a' + 'A'; // Convert to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] - 'A' + 'a'; // Convert to lowercase
        }
    }
}

int main() {
    char str[100];

    // Get input from the user
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Call the function to toggle case
    toggleCase(str);

    // Print the result
    printf("Modified string: %s", str);

    return 0;
}
