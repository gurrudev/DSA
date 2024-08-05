/*
    *       *
      *   * 
        *  
      *   * 
    *       *
*/

#include <stdio.h>

void crossPattern(int num){
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            if(i == j || (i+j) == (num+1))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main(){
    // Only works with odd numbers
    int num = 5;
    crossPattern(num);
    return 0;
}