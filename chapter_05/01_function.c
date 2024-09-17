#include <stdio.h>



int sum(int x, int y){
    int c=x+y;
    printf("sum is:%d",c);
    return 0;
}

int main(){
    int a,b;
   printf("Enter two numbers:");
   scanf("%d%d",&a,&b);

    sum(a,b);

   return 0;
}