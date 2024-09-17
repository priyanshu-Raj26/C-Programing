#include <stdio.h>

void printHW(int count);

int main(){
    printHW(10);
    return 0;
}

// Recursive function.
void printHW(int count){
    if(count==0){
        return;
    }
    printf("Hello Priyanshu!\n");
    printHW(count-1);
}
