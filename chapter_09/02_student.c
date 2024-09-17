#include <stdio.h>
#include <string.h>

//user defined
struct student {
int roll;
float cgpa;
char name [100];
};

int main() {
struct student s1;
s1.roll = 1664;
s1.cgpa = 9.2;
//s1.name = "shradha";
strcpy(s1.name, "shradha");
printf("student name = %s\n", s1.name);
printf("student roll no = %d\n", s1.roll);
printf("student cgpa = %f\n\n", s1.cgpa);



struct student s2;
s2.roll = 1674;
s2.cgpa = 7.6;

strcpy(s2.name, "priyanshu raj");
printf("student name = %s\n", s2.name);
printf("student roll no = %d\n", s2.roll);
printf("student cgpa = %f\n\n", s2.cgpa);



struct student s3;
s3.roll = 1684;
s3.cgpa = 6.8;

strcpy(s3.name, "ishu");
printf("student name = %s\n", s3.name);
printf("student roll no = %d\n", s3.roll);
printf("student cgpa = %f\n\n", s3.cgpa);
return 0;
}