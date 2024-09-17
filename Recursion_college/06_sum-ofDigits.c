#include <stdio.h>

int sumOfDigits(int num) {
    int sum = 0;

    while (num != 0) {
        sum += num % 10; // Add the last digit to sum
        num /= 10;       // Remove the last digit
    }

    return sum;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    int result = sumOfDigits(num);
    printf("The sum of the digits is: %d\n", result);
    
    return 0;
}
