#include<stdio.h>

int main(){
    int sum = 0, n, i;

    printf("Enter an integer number: ");
    scanf("%d", &n);

    for(i = 1; i<=n; i++){
        sum += i;
    }

    printf("Summation: %d", sum);
    return 0;
}