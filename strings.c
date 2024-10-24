#include<stdio.h>


//printing a string character by character
void printString(char arr[]);
int main(){
    char firstName[] = "Kawsar";
    char lastName[] = "Ahmed";

    printString(firstName);
    printString(lastName);

    return 0;
}

void printString(char arr[]){
    for(int i=0; arr[i] != 0; i++){
        printf("%c", arr[i]);
    }
}