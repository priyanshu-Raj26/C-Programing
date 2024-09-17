#include <stdio.h>

float  squareArea(float a);
float circleArea(float b);
float rectangleArea(float x,float y);

int main(){
    float x=5.0;
    float y=10.0;
    
     printf("The area of rectangle is :%.2f\n",rectangleArea(x,y));

    float b=8;
     printf("The area of circle is :%.2f\n",circleArea(b));

     float a=12;
     printf("The area of square is :%.2f\n",squareArea(a));

    return 0;
}

float squareArea(float a){
    return a*a;
}

float circleArea(float b){
    return 3.14*b*b;
} 

float rectangleArea(float x,float y){
    return x*y;
}