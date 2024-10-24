#include<stdio.h>
#include<math.h>

int main(){
    int number, square;

    printf("Enter a number: ");
    scanf("%d", &number);

    square = pow(number, 2);
    printf("Square of %d is: %d", number, square);

    return 0;
}