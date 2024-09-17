#include <stdio.h>

int main()
{
    int marks[3];

    printf("Enter phy :");
    scanf("%d", &marks[0]);

    printf("Enter chem :");
    scanf("%d", &marks[1]);

    printf("Enter mathe :");
    scanf("%d", &marks[2]);

    printf("phy = %d, chem = %d, mathe = %d", marks[0], marks[1], marks[2]);

    return 0;
}