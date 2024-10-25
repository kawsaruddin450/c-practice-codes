#include<stdio.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {2315, 3.45, "Kawsar"};

    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("CGPA: %.2f\n", s1.cgpa);

    return 0;
}