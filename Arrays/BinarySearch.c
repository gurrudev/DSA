#include<stdio.h>
#include<math.h>

int binarySearch(int arr[], int size, int element){
    int left = 0, right = size-1; 
    
    while(left <= right){

        int mid = left + (right - left) / 2;

        if(arr[mid] == element){
            return mid;
        } else if (arr[mid] > element){
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return -1;    
}

int main(){
    // int arr[] = {2, 4, 5, 6, 8, 9, 12, 14, 17, 20};      // Ascending  (arr[mid] < element)
    int arr[] = {20, 17, 14, 12, 9, 8, 6, 5, 4, 2};      // Descending  (arr[mid] > element)
    int size = 10, element = 21;

    int result = binarySearch(arr, size, element);
    printf("%d", result);
    return 0;
}