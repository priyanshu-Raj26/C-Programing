#include <stdio.h>

float newton(float m, float a)
{
    return m * a;
}
int main()
{
    float m, a = 9.8;

    printf("Enter a mass:");
    scanf("%f", &m);

    printf("The force of attraction on a body of mass %.3f is %.3f", m, newton(m, a));
    return 0;
}