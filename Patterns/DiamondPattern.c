/*
       *
     * * *
   * * * * *
 * * * * * * *
   * * * * *
     * * *
       *
 */

#include <stdio.h>

void diamondPattern(int num){
  int numOfSpaces = num / 2;
  int numOfStars = 1;
  int midLine = num / 2 + 1;

  for (int i = 1; i <= num; i++){
    for (int j = 1; j <= numOfSpaces; j++){
      printf("  ");
    }

    for (int k = 1; k <= numOfStars; k++){
      printf("* ");
    }

    if (i < midLine){
      numOfSpaces--;
      numOfStars += 2;
    } else {
      numOfSpaces++;
      numOfStars -= 2;
    }
    printf("\n");
  }
}

int main(){
  int num = 7;
  diamondPattern(num);
  return 0;
}