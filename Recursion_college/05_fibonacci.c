#include <stdio.h>
int fibonacci(int n);
// 0,1,1,2,3,5,8,13,21,34...
int main(){
   int n = 10;
    printf("The value of fibonacci series at %d is %d", n, fibonacci(n));
    return 0;
}


int fibonacci(int n){
    if(n == 1 || n == 2){
        return (n-1);
    }
    if(n == 0){
        return 0;
    }
    return fibonacci(n-1) + fibonacci(n-2);
}

