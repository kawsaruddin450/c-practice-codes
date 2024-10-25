#include<stdio.h>
#include<string.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1;

    s1.roll = 2315;
    s1.cgpa = 3.90;
    strcpy(s1.name, "Kawsar");

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;    
}