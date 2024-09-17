#include <stdio.h>

typedef struct AccountHolder {
    char name[100];
    int accNo;
}abc;

int main(){
    abc c1 = {"priyanshu raj", 6996};
    printf("customer 1 Name = %s\n",c1.name);
    printf("customer 1 accNo = %d\n",c1.accNo);
    return 0;
}