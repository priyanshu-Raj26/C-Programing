#include <stdio.h>
#include <string.h>

//user defined
struct student {
int roll;
float cgpa;
char name [100];
};

int main() {
    struct student s1 = {1664, 9.2, "priyanshu"};
    // printf("studest roll= %d\n",s1.roll);
    // printf("studest cgpa= %f\n",s1.cgpa);
    // printf("studest name= %s\n",s1.name);


struct student *ptr = &s1;                 // structure as pointer
printf("student name with pointer = %s\n",(*ptr).name);

    printf("student->roll = %d\n", ptr->roll);
    printf("student->cgpa = %f\n", ptr->cgpa);
    printf("student->name = %s\n", ptr->name);


    // struct student ece[100];
    // ece[0].roll = 110;
    // ece[0].cgpa = 7.6;
    // strcpy(ece[0].name, "priyanshu raj");

    // printf("name = %s\n",ece[0].name);
    // printf("roll = %d\n",ece[0].roll);
    // printf("cgpa = %f\n",ece[0].cgpa);
return 0;
}