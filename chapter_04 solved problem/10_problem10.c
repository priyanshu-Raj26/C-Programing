#include <stdio.h>

int main()
{
    int i = 2, a, prime = 0;

    printf("Enter a number:");
    scanf("%d", &a);

    if (a == 0 || a == 1)
    {
        prime = 1;
    }
    else
    {

        // while (i < a)
        // {
        //     if (a % i == 0 && a != 2)
        //     {
        //         prime = 1;
        //         break;
        //     }
        //     i++;
        // }

        
        do{
            if (a % i == 0 && a != 2)
            {
                prime = 1;
                break;
            }
            i++;
            
        }while (i < a);
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