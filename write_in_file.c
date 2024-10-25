#include<stdio.h>

int main(){
    FILE *fptr;
    fptr = fopen("odds.txt", "w");

    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    for(int i=1; i<=n; i+=2){
        if(i%2 != 0){
            fprintf(fptr, "%d ", i);
        }
    }

    fclose(fptr);
    return 0;
}