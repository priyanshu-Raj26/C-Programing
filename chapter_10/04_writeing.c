#include <stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("Text.txt", "w");          // append operator

    fprintf(fptr, "%c", 'M');
    fprintf(fptr, "%c", 'A');
    fprintf(fptr, "%c", 'N');
    fprintf(fptr, "%c", 'G');
    fprintf(fptr, "%c", 'O');

    fputc('M', fptr);
    fputc('A', fptr);
    fputc('N', fptr);
    fputc('G', fptr);
    fputc('O', fptr);
    
    fclose(fptr);
    return 0;
}