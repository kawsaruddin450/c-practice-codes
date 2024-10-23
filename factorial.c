#include<stdio.h>

int main(){
    int num, fact = 1;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(num == 0 || num == 1){
        printf("Factorial: 1");
    }else if(num < 0){
        printf("Enter a positive number.");
    }else{
        for(int i = num; i>=1; i--){
            fact*=i;
        }
        printf("Factorial: %d", fact);
    }
    return 0;
}