#include <stdio.h>

int main()
{
    int i=1, x, n = 1;

    printf("Enter a number:");
    scanf("%d", &x);

    while (i<=x)
    {
        n *=i;
        i++;
    }
    
    
    printf("The factorial of %d is %d", x, n);
    return 0;
}