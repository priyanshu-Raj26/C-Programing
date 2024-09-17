#include <stdio.h>

int main()
{
    int n, i = 1;

    printf("Enter a range of  natural number:");
    scanf("%d", &n); 

    for (i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }

    return 0;
}