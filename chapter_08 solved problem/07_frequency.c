#include <stdio.h>
#include <string.h>

#define ASCII_SIZE 256

// Function to find the highest frequency character
char findHighestFreqChar(char str[]) {
    int freq[ASCII_SIZE] = {0};
    int maxFreq = 0;
    char maxChar;

    // Calculate frequency of each character
    for(int i = 0; str[i] != '\0'; i++) {
        freq[(int)str[i]]++;
        if(freq[(int)str[i]] > maxFreq) {
            maxFreq = freq[(int)str[i]];
            maxChar = str[i];
        }
    }

    return maxChar;
}

int main() {
    char str[] = "hello world";
    
    char result = findHighestFreqChar(str);

    printf("The highest frequency character is: %c\n", result);

    return 0;
}

