#include <stdio.h>
#include <string.h>

//user defined
struct student {
int roll;
float cgpa;
char name [100];
};

void printinfo(struct student s1);

int main() {
    struct student s1 = {1664, 9.2, "priyanshu raj"};
    printinfo(s1);
    printf("Student.roll = %d\n",s1.roll);       //call by Referance
    
return 0;
}


void printinfo(struct student s1){
    printf("Student Inforamation : \n");
    printf("Student.roll = %d\n",s1.roll);
    printf("Student.cgpa = %f\n",s1.cgpa);
    printf("Student.name = %s\n",s1.name);

    s1.roll = 1660;
}



