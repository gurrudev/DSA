/*
    * * * * *
      * * * *
        * * *
          * * 
            * 
*/


#include<stdio.h>

void rightAngleTriangle(int num){
    int numOfSpaces = 0;
    int numOfStars = num;

    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= numOfSpaces; j++){
            printf("  ");
        }
        
        for(int k = 1; k <= numOfStars; k++){
            printf("* ");
        }

        numOfSpaces++;
        numOfStars--;
        
        printf("\n");
    }
}

int main(){
    int num = 5;
    rightAngleTriangle(num);
    return 0;
}