#include <stdio.h>

int binarySearch(int arr[], int size, int element){
    int start = 0;
    int end = size - 1;

    while(start <= end){
        int mid = start + (end - start) / 2;
        
        if(arr[mid] == element){
            return mid;
        } else if (arr[mid] < element){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }

    return -1;
}

int main(){
    int arr[] = {11, 12, 54, 65, 76, 98};    // Ascending  (arr[mid] < element)
    // int arr[] = {98, 76, 65, 54, 12, 11};    // Descending  (arr[mid] > element)

    int size = sizeof(arr) / sizeof(arr[0]);

    int result = binarySearch(arr, size, 65);
    printf("%d", result);

    return 0; 
}