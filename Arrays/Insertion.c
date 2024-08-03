
#include<stdio.h>

void displayArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insertionToIndex(int arr[], int size, int element, int capacity, int index){
    if(size >= capacity){
        printf("Array is full, can't perform insertion.\n");
    }

    for(int i = size-1; i >= index; i--){
        arr[i+1] = arr[i];
    }
    arr[index] = element;

    return 0;
}



int main(){
    int arr[100] = {7, 8, 12, 27, 88};
    int size = 5, element = 45, index = 3;
    printf("------------ Array Before Insertion -------------\n");
    displayArr(arr, size);
    printf("------------ Array After Insertion --------------\n");
    insertionToIndex(arr, size, element, 100, index);
    size += 1;
    displayArr(arr, size);

    return 0;
}