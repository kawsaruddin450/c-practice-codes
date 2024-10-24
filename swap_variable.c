#include<stdio.h>

void swap(int a, int b);
void _swap(int *a, int *b);

int main(){
    int a = 3, b = 5;

    swap(a, b);
    printf("After call by value: %d %d\n", a, b);

    _swap(&a, &b);
    printf("After call by reference: %d %d\n", a, b);

    return 0;
}

//call by reference
void _swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

//call by value
void swap(int a, int b){
    int temp = b;
    b = a;
    a = temp;

    printf("After swap: \n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
}