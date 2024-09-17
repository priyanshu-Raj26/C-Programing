#include <stdio.h>

int main(){
    char name[100];
    char count = 0; 

    gets(name);
    for (int i = 0; name[i]!='\0'; i++)
    {
        printf("%c",name[i]);
        count++;
    }
    printf("\nLength is :%d\n",count);
    return 0;
}
