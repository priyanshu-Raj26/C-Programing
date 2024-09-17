#include <stdio.h>

    int change(int a){
         a =77; // misnomer
        return 0;
    }
int main(){
    int b=2;
    change(b);  //The value remains 22
    printf("b is %d",b);
    return 0;
}