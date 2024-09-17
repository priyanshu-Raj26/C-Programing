#include <stdio.h>

int main()
{
    int n=0,i=1;
       
    while (i <= 10)
    {
        n +=i;
        i++;
    }
    printf("The sum of first 10 natural number is:%d",n);
    return 0;
}