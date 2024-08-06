/*
    1
    0 1
    1 0 1
    0 1 0 1
    1 0 1 0 1
*/

#include <stdio.h>

void zeroOnePattern(int num){
    for(int i = 1; i <= num; i++){
        for( int j = 1; j <= i; j++){
            if((i+j)%2 == 0)
                printf("1 ");
            else
                printf("0 ");
        }
        printf("\n");
    }
}

int main(){
    int num = 5;
    zeroOnePattern(num);
    return 0;
}