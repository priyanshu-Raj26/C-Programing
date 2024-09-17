#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Text.txt", "r");
    int no;
    no = fgetc(fptr);
    while (no != EOF) 
    {
        printf("%c",no);
        no = fgetc(fptr);
    }
    

    fclose(fptr);
    return 0;
}   