
#include<stdio.h>

void displayArr(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int insert(int arr[], int size, int index, int element, int capacityOfArray){
    if(size >= capacityOfArray){
        printf("Capacity of array exceeded!");
    }

    for(int i = size-1; i >= index; i--){
        arr[i+1] = arr[i];
    }

    arr[index] = element;

    return 0;
}

int main(){
    int arr[10] = {1, 2, 3, 4};
    int size = 4, element = 5, index = 1;

    displayArr(arr, size);

    insert(arr, size, index, element, 10);
    size++;

    displayArr(arr, size);
    return 0;
}