#include<stdio.h>

int main(){
    float radius;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);

    printf("Area of the circle: %.2f", 3.14*radius*radius);
    return 0;
}