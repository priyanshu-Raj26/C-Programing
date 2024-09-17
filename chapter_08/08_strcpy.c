#include <stdio.h>
#include <string.h>

int main(){
    char oldstr[] = "oldstr";
    char newstr[] = "nwestr";
    puts(newstr);
    strcpy(newstr, oldstr);
    puts(newstr);
    return 0;
}