/*
       * * * *
      * * * *
     * * * *
    * * * *
*/

#include <stdio.h>

void rhombusPattern(int num){
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num-i; j++){
            printf(" ");
        }
        for(int k = 1; k <= num; k++){
            printf("* ");
        }
        printf("\n");
    }
}

int main(){
    int num = 4;
    rhombusPattern(num); 
    return 0;
}