#include <stdio.h>

int main(){
    int age = 69;
    int *ptr = &age;
   

    printf("%u\n",&age); 

    printf("%u\n",ptr);  

    printf("%u\n",&ptr); 

    return 0;
}