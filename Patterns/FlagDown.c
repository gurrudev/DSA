/*
    * * * * * * * * *
    * * * *   * * * *
    * * *       * * *
    * *           * *
    *               *
*/

#include <stdio.h>

void flagDown(int num){
    int numOfSpaces = 1;
    int numOfStars = num-1;
    
    for(int j = 1; j <= num*2-1; j++){
        printf("* ");
    }

    printf("\n");

    for(int i = 1; i <= num-1; i++){

        for(int k = 1; k <= numOfStars; k++){
            printf("* ");
        }  

        for(int l = 1; l <= numOfSpaces; l++){
            printf("  ");
        }

        for(int k = 1; k <= numOfStars; k++){
            printf("* ");
        }    

        numOfSpaces += 2;
        numOfStars--;

        printf("\n");
    }
}

int main(){
    int num = 5;
    flagDown(num);
    return 0;
}
