#include<stdio.h>


// typedef keyword creates an alias for any data type in c.
typedef struct computerEngineeringStudents{
    int roll;
    float cgpa;
    char name[100];
} coe;

int main(){
    coe s1 = {2315, 3.87, "Kawsar"};

    printf("Name: %s\n", s1.name);

    return 0;
}