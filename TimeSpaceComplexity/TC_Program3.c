/* 
    Consider the recursive algorithm below, where the random(int n) spends one of time to return a random integer 
    which is evenly distributed within the range [0, n]. If the average processing time is T(n), what is the value of T(6)?
*/

#include<stdio.h>
#include<stdlib.h>

int random(int n){
    int i;
    int number = (rand() % (n+1));
    return number;
}

int func1(int n){
    int i;
    if(n<=0){
        return 0;
    }else{
        i = random(n-1);
        printf("this\n");
        return func1(i) + func1(n-1-i);
    }
}

int main(){
    func1(6);
    return 0;
}
