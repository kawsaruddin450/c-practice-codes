#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("test.txt", "r");

    char ch = fgetc(fptr);
    printf("%c", ch);

    fclose(fptr);
    return 0;
}