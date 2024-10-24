#include<stdio.h>

int main(){
    int marks[2][3];

    marks[0][0] = 89;
    marks[0][1] = 98;
    marks[0][2] = 90;
    marks[1][0] = 84;
    marks[1][1] = 92;
    marks[1][2] = 93;

    printf("%d", marks[0][1]);

    return 0;
}