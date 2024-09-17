#include <stdio.h>

int main() {
    FILE *file;
    char buffer[100];
    int vowels = 0;

    // Open the file in read mode
    file = fopen("vowel.txt", "r");
    fgets(buffer, 100, file);
    fclose(file);

    // Count vowels
    for (int i = 0; buffer[i] != '\0'; i++) {
        if (buffer[i] == 'a' || buffer[i] == 'e' || buffer[i] == 'i' ||
            buffer[i] == 'o' || buffer[i] == 'u' || buffer[i] == 'A' ||
            buffer[i] == 'E' || buffer[i] == 'I' || buffer[i] == 'O' ||
            buffer[i] == 'U') {
            vowels++;
        }
    }

    // Open the file in write mode and save the vowel count
    file = fopen("input.txt", "w");
    fprintf(file, "%d", vowels);
    fclose(file);

    printf("Vowel count written to file: %d\n", vowels);

    return 0;
}
