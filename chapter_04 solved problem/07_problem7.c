#include <stdio.h>

int main()
{
    int i, x, n = 1;

    printf("Enter a number:");
    scanf("%d", &x);

    for (i = 1; i <= x; i++)
    {

        n *= i;
    }
    printf("The factorial of %d is %d", x, n);
    return 0;
}