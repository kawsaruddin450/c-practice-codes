#include<stdio.h>

int main(){
    float side, area;

    printf("Please enter the side of the square: ");
    scanf("%f", &side);

    area = side*side;
    printf("Area of the square: %.2f", area);

    return 0;
}