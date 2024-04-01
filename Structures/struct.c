#include<stdio.h>
#include<string.h>

struct Student{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct Student s1;

    s1.roll = 1664;
    s1.cgpa = 9.2;

    //s1.name = "Komal"
    strcpy(s1.name,"Komal");
    printf("student name = %s", s1.name);
    printf("student roll no.=%d",s1.roll);
    printf("student cgpa = %f",s1.cgpa);

    struct Student s2;

    s2.roll = 1662;
    s2.cgpa = 7.55;

    //s2.name = "Ruchika"

    strcpy(s2.name,"Ruchika");
    printf("student name = %s", s2.name);
    printf("student roll no. = %d",s2.roll);
    printf("student cgpa = %f",s2.cgpa);

    return 0;
}
