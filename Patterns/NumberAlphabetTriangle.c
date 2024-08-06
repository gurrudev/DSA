/*
    1
    A B
    1 2 3
    A B C D
    1 2 3 4 5
*/

#include <stdio.h>

void numberAlphabetTriangle(int num){
    for (int i = 1; i <= num; i++){
        if (i % 2 == 0){
            int a = 1;
            for (int k = 1; k <= i; k++){
                int d = a + 64;
                char alpha = (char)d;
                printf("%c ", alpha);
                a++;
            }
        } else {
            for (int j = 1; j <= i; j++) {
                printf("%d ", j);
            }
        }
        printf("\n");
    }
}

int main() {
    int num = 5;
    numberAlphabetTriangle(num);
    return 0;
}