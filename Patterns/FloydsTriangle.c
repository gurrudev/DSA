/*
    1
    2 3
    4 5 6
    7 8 9 10

*/

#include <stdio.h>

void floydsTriangle(int num){
    int a = 1;
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= i; j++){
            printf("%d ", a);
            a++;
        }
        printf("\n");
    }
}

int main(){
    int num = 4;
    floydsTriangle(num);
    return 0;
}