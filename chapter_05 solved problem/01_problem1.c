#include <stdio.h>

    float average(int a,int b,int c){
        return (a+b+c)/3.0;
    }
int main(){
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
    printf("The average of a, b and c is:%f",average(a,b,c));
    return 0;
}