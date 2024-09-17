#include <stdio.h>

int main()
{
    int i, a, prime = 0;

    printf("Enter a number:");
    scanf("%d", &a);

    if (a == 0 || a == 1)
    {
        prime = 1;
    }
    else
    {

        for (i = 2; i < a; i++)
        {
            if (a % i == 0 && a != 2)
            {
                prime = 1;
                break;
            }
        }
    }

    if (prime)
    {
        printf("%d is not a prime number.\n", a);
    }
    else
    {
        printf("%d is a prime number.\n", a);
    }

    return 0;
}