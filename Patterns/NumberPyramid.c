/*
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
*/

#include <stdio.h>

void numberPyramid(int num){
    for(int i = 1; i <=num; i++){
        for(int j = 1; j <=num-i; j++){
            printf("  ");
        }

        for(int k = 1; k <= i; k++){
            printf("%d ",k);
        }

        int a = i - 1;
        for(int l = 1; l <= i-1; l++){
            printf("%d ",a);
            a--;
        }

        printf("\n");
    }
}

int main(){
    int num = 4;
    numberPyramid(num);
    return 0;
}