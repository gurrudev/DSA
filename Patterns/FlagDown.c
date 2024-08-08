/*
    (1) * * * * * * * * *     (2)  1 2 3 4 5 6 7 8 9     (3)  A B C D E F G H I   (4)  1 2 3 4 5 4 3 2 1
        * * * *   * * * *          1 2 3 4   6 7 8 9          A B C D   F G H I        1 2 3 4   4 3 2 1
        * * *       * * *          1 2 3       7 8 9          A B C       G H I        1 2 3       3 2 1
        * *           * *          1 2           8 9          A B           H I        1 2           2 1
        *               *          1               9          A               I        1               1
*/

#include <stdio.h>

// (1) 
void flagDown1(int num){
    int numOfSpaces = 1;
    int numOfStars = num-1;
    
    for(int j = 1; j <= num*2-1; j++){
        printf("* ");
    }

    printf("\n");

    for(int i = 1; i <= num-1; i++){

        for(int k = 1; k <= numOfStars; k++){
            printf("* ");
        }  

        for(int l = 1; l <= numOfSpaces; l++){
            printf("  ");
        }

        for(int k = 1; k <= numOfStars; k++){
            printf("* ");
        }    

        numOfSpaces += 2;
        numOfStars--;

        printf("\n");
    }
}


// (2) 
void flagDown2(int num){
    int numOfSpaces = 1;
    int numOfStars = num-1;
    
    for(int j = 1; j <= num*2-1; j++){
        printf("%d ",j);
    }

    printf("\n");

    for(int i = 1; i <= num-1; i++){
        int a = 1;
        for(int k = 1; k <= numOfStars; k++){
            printf("%d ", a);
            a++;
        }  

        for(int l = 1; l <= numOfSpaces; l++){
            printf("  ");
            a++;
        }

        for(int k = 1; k <= numOfStars; k++){
            printf("%d ", a);
            a++;
        }    

        numOfSpaces += 2;
        numOfStars--;

        printf("\n");
    }
} 


// (3) 
void flagDown3(int num){
    int numOfSpaces = 1;
    int numOfStars = num-1;
    
    for(int j = 1; j <= num*2-1; j++){
        printf("%c ",(char)j+64);
    }

    printf("\n");

    for(int i = 1; i <= num-1; i++){
        
        int a = 1;
        for(int k = 1; k <= numOfStars; k++){
            printf("%c ", (char)a+64);
            a++;
        }  

        for(int l = 1; l <= numOfSpaces; l++){
            printf("  ");
            a++;
        }

        for(int k = 1; k <= numOfStars; k++){
            printf("%c ", (char)a+64);
            a++;
        }    

        numOfSpaces += 2;
        numOfStars--;

        printf("\n");
    }
} 


// (4) 
void flagDown4(int num){
    int numOfSpaces = 1;
    int numOfStars = num-1;
  
    for(int j = 1; j <= num; j++){
        printf("%d ",j);
    }

    for(int m = num-1; m >= 1; m--){
        printf("%d ",m);
    }

    printf("\n");

    for(int i = 1; i <= num-1; i++){
        for(int k = 1; k <= numOfStars; k++){
            printf("%d ", k);
        }  

        for(int l = 1; l <= numOfSpaces; l++){
            printf("  ");
        }

        for(int k = numOfStars; k >= 1; k--){
            printf("%d ", k);
            
        }    

        numOfSpaces += 2;
        numOfStars--;

        printf("\n");
    }
} 

int main(){
    int num = 5;

    flagDown1(num);
    printf("\n");
    
    flagDown2(num);
    printf("\n");
  
    flagDown3(num);
    printf("\n");
  
    flagDown4(num);
  
    return 0;
}   
