#include <stdio.h>

int main(){
    float amount;

    printf("Enter your income amount(in lakhs):\n");
    scanf("%f",&amount);

    printf("Your income is:%f\n",amount);

    if(amount>2.5 && amount<5.0)
    {
        printf("You have to pay 5 percentage   tax.\n");
    }
    else if(amount>5.0 && amount<10.0)
    {
        printf("you have to pay 20 percentage tax.\n");
    }
    else if (amount>10.0)
    {
        printf("You have to pay 30 percentage tax.\n");
    }
    else 
    {
        printf("Your income is below 2.5 lakhs you no need to pay tax.\n");
    }
    return 0;
}