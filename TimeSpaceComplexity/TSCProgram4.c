/*
    Given an Array of size n+1 consisting of integers from 1 to n.
    One of the elements is duplicated in the array. Find that duplicate element.
*/


#include <stdio.h>


int findDuplicateElement(int arr[], int size){

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
        // if(flag == 0) break;
    }
    */

    // Solution #2: Temperory Array

    /*
    int temp[size];
    for(int i = 0; i <= size; i++){
        if(temp[arr[i]] == 1){
            printf("%d", arr[i]);
            break;
        }
        temp[arr[i]] = 1;
    }
    */

    // Solution #3: 

    int sum = 0;
    int result = 0; 

    for(int i = 0; i <= size; i++){
        sum += arr[i];
    }

    // Because we have size of an array is n+1 and 1 element is repeted and we have to reduce it.
    int s = (size * (size+1)) / 2;

    result = sum - s;

    printf("%d", result);

}

int main(){
    int arr[] = {5, 1, 4, 4, 2, 3};
    int size = sizeof(arr)/sizeof(arr[0]);
    findDuplicateElement(arr, size);
    return 0;
}

/*  
    Conclusion: 

    Solution #1: Nested Loop

    => k1n + k2n + 1
    =  (k1 + k2)n + 1
    =  k3n + 1 -> O(n+1) 
    => Time Coplexity: O(n+1)
    => Space Complexity: O(1)
    

    Solution #2: Temperory Array

    => Time Coplexity: O(n)
    => Space Complexity: O(n+n)


    // Solution #3:

    => Time Coplexity: O(n)
    => Space Complexity: O(1)

*/