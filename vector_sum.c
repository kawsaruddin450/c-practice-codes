#include<stdio.h>

typedef struct vector{
    int x;
    int y;
}vect;

void vectorSum(vect vec1, vect vec2);
int main(){
    vect vec1 = {2, 3};
    vect vec2 = {3, 2};

    vectorSum(vec1, vec2);
    return 0;
}

void vectorSum(vect vec1, vect vec2){
    int sumx = vec1.x + vec2.x;
    int sumy = vec1.y + vec2.y;

    printf("sum of given vectors: %di + %dj", sumx, sumy);
    return;
}