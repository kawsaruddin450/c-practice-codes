#include<stdio.h>

int main(){
    int mark;
    printf("Enter your mark: ");
    scanf("%d", &mark);

    if(mark > 0 && mark < 30){
        printf("F");
    }
    else if(mark < 70){
        printf("C");
    }
    else if(mark < 90){
        printf("B");
    }
    else if(mark <= 100){
        printf("A+");
    }
    else{
        printf("Please enter a valid mark.");
    }

    return 0;
}