#include<stdio.h>

int main(){
    int a = 5*2 - 2*3; //expected output: 4
    printf("%d\n", a);

    int b = 5*2/2*3;  //expected output: 15
    printf("%d\n", b);

    int c = 5*(2/2)*3; //expected output: 15
    printf("%d\n", c);

    int d = 5+2/2*3; //expected output 8
    printf("%d", d);

    return 0;
}