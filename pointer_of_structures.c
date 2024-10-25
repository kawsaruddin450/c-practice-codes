#include<stdio.h>

struct student
{
    int roll;
    float cgpa;
    char name[100];
};

int main(){
    struct student s1 = {2315, 3.45, "Kawsar"};

    struct student *ptr = &s1;
    printf("Name: %s\n", (*ptr).name);
    printf("Roll: %d\n", ptr->roll);

    return 0;
}