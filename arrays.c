#include<stdio.h>

int main(){
    float price[3];

    printf("Enter three prices: ");
    scanf("%f", &price[0]);
    scanf("%f", &price[1]);
    scanf("%f", &price[2]);

    for(int i = 0; i<3; i++){
        printf("Price %d: %f\n", i, price[i] + price[i]*0.18);
    }
    return 0;
}