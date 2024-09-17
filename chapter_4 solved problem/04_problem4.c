#include <stdio.h>

int main()
{
    int n=0,i=1;
     
    do{
        n +=i;
        i++;
    } while (i <= 10);
    printf("The sum of first 10 natural number is:%d",n);
    return 0;
}