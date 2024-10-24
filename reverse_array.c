#include<stdio.h>

int reverseArray(int arr[], int n);
int main(){
    int arr[] = {1, 2, 3, 4, 5};

    reverseArray(arr, 5);
    printf("Reversed array: ");
    for(int i=0; i<5; i++){
        printf("%d\t", arr[i]);
    }
    return 0;
}

int reverseArray(int arr[], int n){
    int reversedArr[n];

    for(int i = 0; i<=n/2; i++){
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];

        arr[i] = secondValue;
        arr[n-i-1] = firstValue;
    }
}