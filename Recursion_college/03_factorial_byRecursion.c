#include <stdio.h>

int factorial(int a);
int main(){
    printf("factorial is :%d",factorial(4));

    return 0;
}

int factorial(int a){
    if(a == 1){
        return 1;
    }
    int factNm1 = factorial(a-1);
    int factN = factNm1 * a;
    return factN;
}

