#include <stdio.h>

void printstring(char *arr);

int main(){
    char firstname[] = "Priyanshu";
    char lastname[] = "Raj";

    printstring(firstname);
    printstring(lastname);
    return 0;
}


void printstring(char arr[]){
    for(int i = 0; arr[i]!= '\0'; i++)
    {
        printf("%c",arr[i]);
    }
    printf("\n");
}

