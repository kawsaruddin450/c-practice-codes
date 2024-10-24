#include<stdio.h>

int main(){
    char *canChange = "Hello world";
    puts(canChange);
    canChange = "Hello"; // string can be change only when declared by pointer, not by array notation.
    puts(canChange);

    return 0;
}