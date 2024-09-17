#include <stdio.h>
#include <string.h>

int main(){
    char firststr[] = "Hello "; 
    char secstr[] = "World"; 

    strcat(firststr, secstr);     // Conatinate secstr with firststr.
    puts(firststr);       //  Not include space.
    return 0;
}