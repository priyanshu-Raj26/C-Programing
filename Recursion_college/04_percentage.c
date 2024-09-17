#include <stdio.h>

float perc(float a,float b, float c);

int main(){
    float a=98.00,b=95.00,c=99.00;
    printf("percentage is :%f",perc(a,b,c));
    return 0;
}


float perc(float a,float b, float c){
    return ((a+b+c)/300)*100;
}
