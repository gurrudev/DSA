/*
          *
        * *
      * * *
    * * * *
*/

#include<stdio.h>

void rightAngleTriangle(int num){
  for(int i = 1; i <= num; i++){
    for(int j = 1; j <= num-i; j++){
      printf("  ");
    }

    for(int k = 1; k <= i; k++){
      printf("* ");
    }
    printf("\n");
  }
}

int main(){
    int num = 4;
    rightAngleTriangle(num);
    return 0;
}