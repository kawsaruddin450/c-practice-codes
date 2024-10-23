#include<stdio.h>

int main(){
    int day;
    printf("Enter a day: ");
    scanf("%d", &day);

    // 1 = monday, 2 = tuesday, 3 = wednesday, 4 = thrusday, 5 = friday, 6 = saturday, 7 = sunday;
    switch (day)
    {
    case 1:
        printf("Monday");
        break;
    case 2:
        printf("Tuesday");
        break;
    case 3:
        printf("Wednesday");
        break;
    case 4:
        printf("Thursday");
        break;
    case 5:
        printf("Friday");
        break;
    case 6:
        printf("Saturday");
        break;
    case 7:
        printf("Sunday");
        break;
    
    default:
        printf("Not an valid weekday.");
        break;
    }
    return 0;
}