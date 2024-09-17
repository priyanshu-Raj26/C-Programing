#include <stdio.h>

int main() {
    FILE *file;

    // Open the file in write mode
    file = fopen("students.txt", "w");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    // Writing the header
    fprintf(file, "%-15s %-10s %-5s %-15s\n", "Name", "Marks", "CGPA", "Course");
    fprintf(file, "---------------------------------------------\n");

    // Writing the information of 5 students
    fprintf(file, "%-15s %-10d %-5.2f %-15s\n", "Alice", 85, 8.5, "Computer Science");
    fprintf(file, "%-15s %-10d %-5.2f %-15s\n", "Bob", 78, 7.8, "Mechanical Engg");
    fprintf(file, "%-15s %-10d %-5.2f %-15s\n", "Charlie", 92, 9.2, "Electrical Engg");
    fprintf(file, "%-15s %-10d %-5.2f %-15s\n", "David", 88, 8.8, "Civil Engineering");
    fprintf(file, "%-15s %-10d %-5.2f %-15s\n", "Eve", 81, 8.1, "Electronics");

    // Close the file
    fclose(file);

    printf("Student information written to file 'students.txt'.\n");

    return 0;
}
