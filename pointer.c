#include<stdio.h>

int main(){
    int x;
    int *ptr;

    ptr = &x;
    *ptr = 0;

    printf("%d\n", x); //expected output 0;
    printf("%d\n", *ptr); //expected output 0;

    *ptr += 5;
    printf("%d\n", x); // expected output 5;
    printf("%d\n", *ptr); //expected output 5;

    (*ptr)++;
    printf("%d\n", x); // expected output 6;
    printf("%d\n", *ptr); //expected output 6;

    return 0;
}