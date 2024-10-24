#include<stdio.h>

int sum(int n);

int main(){
    int n, result;
    printf("Enter a natural number: ");
    scanf("%d", &n);

    result = sum(n);
    printf("Sum: %d", result);

    return 0;
}

int sum(int n){
    if(n == 1){
        return 1;
    }
    return sum(n-1) + n;
}