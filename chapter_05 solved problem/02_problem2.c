#include <stdio.h>

float tempt(float c)
{
    return (c * 9 / 5) + 32;
}
int main()
{
    float a;
    printf("Enter celsius:");
    scanf("%f", &a);

    printf("fahrenheit is:%.2f", tempt(a));
    return 0;
}