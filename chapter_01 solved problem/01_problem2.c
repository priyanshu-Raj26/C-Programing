#include <stdio.h>

int main()
{
    int length, breath;
    printf("Enter length:\n");
    scanf("%d", &length);

    printf("Enter breath:\n");
    scanf("%d", &breath);

    printf("The area of the rectangle is%d:", length * breath);
    return 0;
}