#include <stdio.h>

// Function prototypes
void fillTable(int table[], int multiplier, int size);
void printTable(int table[], int multiplier, int size);

int main() {
    int tables[2][10];  // Declare a 2x10 array

    // Fill the array with the table of 2 and 3
    fillTable(tables[0], 2, 10);  // Fill the first row with the table of 2
    fillTable(tables[1], 3, 10);  // Fill the second row with the table of 3

    // Print the tables
    printf("Table of 2:\n");
    printTable(tables[0], 2, 10);  // Print the table of 2

    printf("\nTable of 3:\n");
    printTable(tables[1], 3, 10);  // Print the table of 3

    return 0;
}

// Function to fill a table with the multiplication values
void fillTable(int table[], int multiplier, int size) {
    for (int i = 0; i < size; i++) {
        table[i] = multiplier * (i + 1);
    }
}

// Function to print a multiplication table
void printTable(int table[], int multiplier, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d x %d = %d\n", multiplier, i + 1, table[i]);
    }
}
