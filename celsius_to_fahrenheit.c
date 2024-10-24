#include<stdio.h>

float celsiusToFahrenheit(float celsius);

int main(){
    float celsius, result;

    printf("Enter temparature in celsius: ");
    scanf("%f", &celsius);

    result = celsiusToFahrenheit(celsius);
    printf("Fahrenheit: %.2f", result);

    return 0;
}

float celsiusToFahrenheit(float celsius){
    float far = celsius*(9.0/5.0) + 32;
    return far;
}