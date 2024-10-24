#include<stdio.h>

void slice(char str[], int n, int m);
int main(){
    int n, m;
    char str[] = "Hello World!";
    printf("Enter starting and ending index: ");
    scanf("%d %d", &n, &m);

    slice(str, n, m);
    // printf("Your sliced string is: ");
    // puts(str);

    return 0;
}
void slice(char str[], int n, int m){
    char newStr[100];
    int j = 0;
    for(int i = n; i<=m; i++, j++){
        newStr[j] = str[i];
    }
    newStr[j] = '\0';
    puts(newStr);
}