#include <stdio.h>

void display(int arr[], int size){
    for(int i = 0; i < size; i++){
        printf("%d ", arr[i]);
    }
}

int deletion(int arr[], int size, int index){
    for(int i = index; i < size; i++){
        arr[i] = arr[i+1];
    }
}

int main(){
    int arr[10] = {1, 2, 3, 4, 5};
    int size = 5, index = 1;
    display(arr, size);
    printf("\n");
    deletion(arr, size, index);
    size--;
    display(arr, size); 
    return 0;
}