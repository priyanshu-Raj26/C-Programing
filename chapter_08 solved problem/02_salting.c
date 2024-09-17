#include <stdio.h>
#include <string.h>

void salting(char pass[]);

int main()
{
    char pass[100];
    scanf("%s", pass);
    salting(pass);
    return 0;
}

void salting(char pass[])
{
    char salt[] = "123";
    // char newpass[200];

    // strcpy(newpass, pass);   //newpass = "test"
    strcat(pass, salt); // newpass = "test" + "123"
    puts(pass);
}
