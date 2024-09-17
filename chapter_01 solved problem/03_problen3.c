#include <stdio.h>

int main(){
    float c,f;

printf("Enter a celsius:");
scanf("%f",&c);

f=(9.0/5.0)*c + 32;
printf("\nThe fahrenhiet of celsius %f is:%f\n",c,f);


    return 0;
}