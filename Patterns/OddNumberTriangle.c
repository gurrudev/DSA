/*
    1
    1 3 
    1 3 5
    1 3 5 7
*/

#include<stdio.h>

void oddNumberTriangle(int num){
    for(int i = 1; i <= num; i++){
        int a = 1;
        for(int j = 1; j <= i; j++){
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }
}

int main(){
    int num = 4;
    oddNumberTriangle(num);
    return 0;
}