#include <stdio.h>

int bubbleSort(int arr[], int size){
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size - i; j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
    return 0;
}

int main(){

    int arr[] = {98, 76, 65, 54, 12, 11}; 
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = bubbleSort(arr, size);
    
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}