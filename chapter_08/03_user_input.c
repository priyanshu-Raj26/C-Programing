#include <stdio.h>

int main(){
    char firstName[50];

    printf("Enter your first name:");
    scanf("%s",firstName);             //cannot input mulit-words strings with space 
    printf("Your name is :%s",firstName);


// char str [100];

//     gets(str);
//     puts(str);
    
    return 0;
}