#include <stdio.h>

int main() 
{   int n,i=1;
    printf("Enter a range of natural no\n",n);
    scanf("%d",&n);

    printf("\n");
    do
    {
        printf("%d\n",i);
        i++;
    } while (i<=n);

    return 0;
}