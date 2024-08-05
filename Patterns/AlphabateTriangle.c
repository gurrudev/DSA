/*
    A
    A B 
    A B C
    A B C D
    A B C D E
*/

#include<stdio.h>

void alphabetTriangle(int num){
    for(int i = 1; i <= num; i++){
        int a = 1;
        for(int j = 1; j <= i; j++){
            int d = a + 64;
            char alpha = (char)d;
            printf("%c ", alpha);
            a++;
        }
        printf("\n");
    }
}

int main(){
    int num = 5;
    alphabetTriangle(num);
    return 0;
}