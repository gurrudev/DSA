/*
(1) *                (2) 1
    * *                  1 2
    * * *                1 2 3
    * * * *              1 2 3 4
    * * * * *            1 2 3 4 5
*/


#include<stdio.h>

// (1) - Stars
void rightAngleTriangle(int num){
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("* ");
        }
        printf("\n");
    }
}

// (2) - Numbers
void rightAngleTriangleNumbers(int num){
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main(){
    int num = 5;
    rightAngleTriangle(num);
    rightAngleTriangleNumbers(num);
    return 0;
}
