/* 
        *
        *
    * * * * *
        *
        *
*/

#include<stdio.h>

void plusPattern(int num){
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            if(i == num/2+1 || j == num/2+1){
                printf(" *");
            } else{
                printf("  ");
            }
        }
        printf("\n");
    }
}

int main(){
    // Works with only odd numbers.
    int num = 5;
    plusPattern(num);
    return 0;
}