#include<stdio.h>

int countLength(char str[]);
int main(){
    char name[50];
    printf("Please enter your first name: ");
    fgets(name, 50, stdin);

    int count = countLength(name);
    printf("Length of your name: %d", count);
}

int countLength(char str[]){
    int count = 0;
    for(int i=0; str[i] != '\0'; i++){
        count++;
    }

    return count-1;
}