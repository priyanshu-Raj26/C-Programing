#include <stdio.h>
#include <string.h>
#include <ctype.h>

void displayWord(char word[], int guessed[]) {
    for (int i = 0; i < strlen(word); i++) {
        if (guessed[i]) {
            printf("%c ", word[i]);
        } else {
            printf("_ ");
        }
    }
    printf("\n");
}

int isWordGuessed(char word[], int guessed[]) {
    for (int i = 0; i < strlen(word); i++) {
        if (!guessed[i]) {
            return 0;
        }
    }
    return 1;
}

void playHangman(char word[], int maxAttempts) {
    int guessed[strlen(word)];
    for (int i = 0; i < strlen(word); i++) {
        guessed[i] = 0;
    }

    int attempts = 0;
    char guess;
    int correctGuess;

    printf("Welcome to Hangman!\n");

    while (attempts < maxAttempts) {
        printf("Word: ");
        displayWord(word, guessed);

        printf("Enter a letter: ");
        scanf(" %c", &guess);
        guess = tolower(guess); // Convert to lowercase to make the game case-insensitive

        correctGuess = 0;
        for (int i = 0; i < strlen(word); i++) {
            if (word[i] == guess && !guessed[i]) {
                guessed[i] = 1;
                correctGuess = 1;
            }
        }

        if (!correctGuess) {
            attempts++;
            printf("Wrong guess! Attempts remaining: %d\n", maxAttempts - attempts);
        }

        if (isWordGuessed(word, guessed)) {
            printf("Congratulations! You guessed the word: %s\n", word);
            return;
        }
    }

    printf("Sorry, you've been hanged! The word was: %s\n", word);
}

int main() {
    char word[] = "programming"; // The word to guess
    int maxAttempts = 6;

    playHangman(word, maxAttempts);

    return 0;
}
