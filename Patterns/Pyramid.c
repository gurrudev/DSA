/*
(1)    *           (2)      *
      * *                 * * *
     * * *              * * * * *
    * * * *           * * * * * * *
   * * * * *        * * * * * * * * *
*/

#include <stdio.h>

void pyramid(int num){
    for(int i = 1; i <= num; i++){

        // // (1)
        // for(int j = 1; j <= num-i; j++){
        //     printf(" ");
        // }
        // for(int k = 1; k <=i; k++){
        //     printf("* ");
        // }

        // (2)
        for(int j = 1; j <= num-i; j++){
            printf("  ");
        }
        for(int k = 1; k <=2*i-1; k++){
            printf("* ");
        }

        printf("\n");
    }
}

int main(){
    int num = 5;
    pyramid(num);
    return 0;
}