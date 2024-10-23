#include<stdio.h>

int main(){
    int a;
    printf("Enter an integer number: ");
    scanf("%d", &a);

    printf("%d", a%2==0);
    return 0;
}