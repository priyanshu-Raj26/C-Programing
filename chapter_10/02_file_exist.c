#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("NewText.txt", "w");

    if(fptr == NULL) {
        printf("fILE dosen't exist\n");
    } else {
        fclose(fptr);
    }
    
    fclose(fptr);
    return 0;
}