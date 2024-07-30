// Find the time complexity of the func1() function in the program.

#include <stdio.h>

void func1(int n){
    // k1
    int sum = 0;
    int product = 1;

    for(int i = 0; i < n; i++){         // 0 -> n
        for(int j = 0; j < n; j++){     // 0 -> n

            // k2
            printf("%d, %d\n ",i, j);
        }
    }
}

int main(){
    func1(4);
    return 0;
}

/*
    = n + n + n .......... (n-1)n
    => [n + n + n .......... (n-1)n]k2   --- using "k2" here because whole perpose of program is "k2"
    => nk2 [1 + 1 + 1 ..........(n)] = k2n^2
    = O(n^2)
*/