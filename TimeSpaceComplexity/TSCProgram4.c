/*
    Given an Array of size n+1 consisting of integers from 1 to n.
    One of the elements is duplicated in the array. Find that duplicate element.
*/


#include <stdio.h>


int findDuplicate(int arr[], int size){

    // Solution #1: Nested Loop

    /*
    for (int i=0; i<=size; i++){        // k1n
        int flag = 1;

        for(int j=i+1; j<size; j++){    // k2n

            if(arr[i]==arr[j]){
                printf("%d ", arr[i]);
                flag = 0;
                break;
            }

        }
    }
    */

    // Solution #2: Temperory Array
    

}

int main(){
    int arr[] = {5, 1, 4, 3, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    findDuplicate(arr, size);
    return 0;
}

/*  
    Solution #1: Nested Loop
    Conclusion: Time Complexity 

    => k1n + k2n
    =  (k1 + k2)n
    =  k3n -> O(n) 

    +---------+
    +   O(n)  +
    +---------+

    Solution #2: Temperory Array

*/