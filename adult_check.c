#include<stdio.h>

int main(){
    int age;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("You're an adult.");
    }
    else{
        printf("You're not an adult");
    }
    return 0;
}