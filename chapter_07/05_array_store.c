#include <stdio.h>

int main(){
    int addhar[5];
    int *ptr = &addhar[0];

    for ( int i = 0; i < 5; i++)
    {
        printf("%d index : ",i);
        scanf("%d",(ptr+i));  //4 int se badhe gaa (har bar next index me enter  ho ga)
    }
    printf("\n");
    for ( int i = 0; i < 5; i++)
    {
        printf("%d index = %d\n",i,*(ptr+i));   //(har bar next index me print ho ga)
    }
    return 0;
}