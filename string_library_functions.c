#include<stdio.h>
#include<string.h>

int main(){
    //determines length of any string;
    char name[] = "kawsar";
    printf("%d\n", strlen(name));

    //copy a string into another.
    char newStr[] = "New";
    char oldStr[] = "Old";
    strcpy(newStr, oldStr);
    printf("%s %s\n", newStr, oldStr);

    //concatination of string
    char firstStr[100] = "Hello ";
    char secondStr[] = "world.";
    strcat(firstStr, secondStr);
    puts(firstStr);

    return 0;
}