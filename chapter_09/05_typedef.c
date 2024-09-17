#include <stdio.h>
#include <string.h>

//user defined
typedef struct student {
    int roll;
    float cgpa;
    char name [100];
}stu ;

typedef struct ComputerEngineeringStudent {
    int roll;
    float cgpa;
    char name [100];
}coe;

int main() {
    coe s1;
    s1.roll = 1664;
    s1.cgpa = 7.6;
    strcpy(s1.name,"priyanshu raj");

    printf("student name is %s\n",s1.name);
return 0;
}