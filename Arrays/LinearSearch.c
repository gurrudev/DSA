
#include<stdio.h>

int linearSearch(int arr[], int size, int element){
    int flag = 0;
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            flag = 1;
            break;
        }
    }
    return flag;
}

int main(){
    int arr[] = {3, 5, 8, 1, 9, 2};
    int size = 6, element = 6;
    
    int result = linearSearch(arr, size, element);
    printf("%d", result);
    return 0;
}