#include <stdio.h>

int main(){
    int a=4 ,b=1456436 ,c=23,d=695672434;
    if(a>b && a>c && a>d){
        printf("%d is the gratest number\n",a);
    }
    else if(b>a && b>c && b>d){
        printf("%d is the gratest number\n",b);
    }
    else if(c>a && c>b && c>d){
        printf("%d is the gratest number\n",c);
    }
    else  {
        printf("%d is the gratest number\n",d);
    }
    return 0;
}