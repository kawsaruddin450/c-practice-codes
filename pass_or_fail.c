#include<stdio.h>

int main(){
    int mark;
    printf("Enter your mark: ");
    scanf("%d", &mark);

    if(mark > 0 && mark < 40){
        printf("You've failed!");
    }
    else if(mark >= 40 && mark<= 100){
        printf("You've passed!");
    }else{
        printf("Mark must be within 0 to 100.");
    }

    return 0;
}