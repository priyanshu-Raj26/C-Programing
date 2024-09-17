#include <stdio.h>

int main(){
    char *canchange = "Hello World";     //pointer value can change
    puts(canchange);
    canchange = "Hello";
    puts(canchange);
  



    // char cannotchange[] = "Hello World";    //its value cannot change
    // puts(cannotchange);
    // cannotchange = "Hello";             //should use pointer
    // puts(cannotchange);

    return 0;
}