/*
    @ @ @ @ @ @ 
    @         @ 
    @         @ 
    @ @ @ @ @ @ 
*/


#include<stdio.h>

void hollowRectangle(int rows, int columns){
    for(int i = 1; i <= rows; i++){
        for(int j = 1; j <= columns; j++){
            //😎
            if(i == 1 || j == 1 || i == rows || j == columns)
                printf("@ ");
            else
                printf("  ");
        }
        printf("\n");
    }
}

int main(){
    int rows = 4, columns = 6;
    hollowRectangle(rows, columns);
    return 0;
}
