#include <stdio.h>

int main(){
    float amount, tax = 0;

    printf("Enter your income amount (in lakhs):\n");
    scanf("%f", &amount);

    printf("Your income is: %.3f lakhs\n", amount);

    if(amount > 250000 && amount <= 500000) {
        tax = (amount - 250000) * 0.05;
    } 
    else if(amount > 500000 && amount <= 1000000) {
        tax = (500000 - 250000) * 0.05 + (amount - 500000) * 0.20;
    } 
    else if(amount > 1000000) {
        tax = (500000 - 250000) * 0.05 + (1000000 - 500000) * 0.20 + (amount - 1000000) * 0.30;
    }

    if(tax > 0) {
        printf("You have to pay Rs. %.3f  as tax.\n", tax);
    } else {
        printf("Your income is below 250000 lakhs, you don't need to pay tax.\n");
    }
    
    return 0;
}
