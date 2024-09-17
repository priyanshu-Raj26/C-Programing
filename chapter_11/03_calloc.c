#include <stdio.h>
#include <stdlib.h>

int main(){
    float *ptr;
    ptr = (float *) calloc(5 , sizeof(float));    // run time alloceted memory 

    // ptr[0] = 1;
    // ptr[1] = 3;
    // ptr[2] = 5;
    // ptr[3] = 7;
    // ptr[4] = 9;

    for (int i = 0; i < 5; i++)
    {
        printf("%.2f\n", ptr[i]);
    }
    
    return 0;
}