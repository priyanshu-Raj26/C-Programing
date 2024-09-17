#include <stdio.h>

typedef struct adressofpeople {
    int houseNo;
    char blockNo[10]; 
    char  city[100]; 
    char state[100];
}aop ;

int main(){
    aop p1 = {10, "A", "patna", "Bihar"};
    printf("Adress of 1 people:-\n");
    printf("House No  : %d\n",p1.houseNo);
    printf("Block No : %s\n",p1.blockNo);
    printf("city : %s\n",p1.city);
    printf("state : %s\n\n",p1.state);
    

    aop p2 = {20, "B", "durgapur", "kolkata"};
    printf("Adress of 2 people:-\n");
    printf("House No  : %d\n",p2.houseNo);
    printf("Block No : %s\n",p2.blockNo);
    printf("city : %s\n",p2.city);
    printf("state : %s\n\n",p2.state);


    aop p3 = {10, "A", "patna", "Bihar"};
    printf("Adress of 3 people:-\n");
    printf("House No  : %d\n",p3.houseNo);
    printf("Block No : %s\n",p3.blockNo);
    printf("city : %s\n",p3.city);
    printf("state : %s\n\n",p3.state);



    aop p4 = {10, "A", "patna", "Bihar"};
    printf("Adress of 4 people:-\n");
    printf("House No  : %d\n",p4.houseNo);
    printf("Block No : %s\n",p4.blockNo);
    printf("city : %s\n",p4.city);
    printf("state : %s\n\n",p4.state);




    aop p5 = {10, "A", "patna", "Bihar"};
    printf("Adress of 5 people:-\n");
    printf("House No  : %d\n",p5.houseNo);
    printf("Block No : %s\n",p5.blockNo);
    printf("city : %s\n",p5.city);
    printf("state : %s\n\n",p5.state);


    return 0;
}