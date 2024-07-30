// Find the time complexity of the func1() function in the program.

#include <stdio.h>

void func1(int arr[], int count){
    int sum = 0;        //
    int product = 31;   // fragment 1 = f1 = k1


    for(int i = 0; i < count; i++){    //
        sum += arr[i];                  //
    }                                   // fragment 2 = f2 = k2n 


    for(int j = 0; j < count; j++){    //
        product *= arr[j];              //
    }                                   // fragment 3 = f3 = k3n 
}

int main(){
    int arr[] = {3, 5, 64};
    func1(arr,3);
    return 0;
}

/*
    Tn = f1 + f2 + f3
       = k1 + k2n + k3n  --- "k" denotes time, "n" denotes number of temes.
       = k2n + k3n --- "k1" has been removed because it is constant, in simple terms it will take same time to  assign variables, whereas "k2n" and "k3n" can take more or less time because the size of array and no. of counts can be changed.
       => (k2 + k3)n
       = k4n -> O(n) -> O(count)
*/