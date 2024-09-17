#include <stdio.h>

int main(){
    float items[3];

    printf("Enter price of 3 items :  ");
    scanf("%f",&items[0]);
    scanf("%f",&items[1]);
    scanf("%f",&items[2]);

    printf("total price 1 : %.2f\n",items[0]+(0.18*items[0]));
    printf("total price 2 : %.2f\n",items[1]+(0.18*items[1]));
    printf("total price 3 : %.2f\n",items[2]+(0.18*items[2]));
    return 0;
}