#include<stdio.h>

int sum(int a, int b);

int main(){
    int a, b, result;

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    result = sum(a, b);
    printf("Summation: %d", result);

    return 0;
}

int sum(int a, int b){
    return a+b;
}