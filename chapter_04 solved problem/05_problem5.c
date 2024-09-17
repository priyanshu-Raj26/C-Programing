#include <stdio.h>

int main(){
    int n=0,i;

    for (i=1;i<=10;i++)
    {
        n +=i;
    }
    printf("The sum of first 10 natural number is:%d",n);
    return 0;
}