/*
(1) * * * * *        (2) 1 2 3 4 5
    * * * *              1 2 3 4
    * * *                1 2 3
    * *                  1 2
    *                    1
*/



#include<stdio.h>

// (1) - Stars
void rightAngleTriangleDown(int num){
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num-i+1; j++){
            printf("* ");
        }
        printf("\n");
    }
}

// (2) - Numbers
void rightAngleTriangleDownNumbers(int num){
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num-i+1; j++){
            printf("%d ", j);
        }
        printf("\n");
    }
}

int main(){
    int num = 5;
    rightAngleTriangleDown(num);
    rightAngleTriangleDownNumbers(num);
    return 0;
}