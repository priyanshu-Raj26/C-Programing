#include <stdio.h>

void printAdress(int n);

int main(){
    int n = 4;
    printAdress(n);
    printf("adress is : %u\n",&n);
    return 0;
}


void printAdress(int n){
    printf("adress is : %u\n",&n);
}
