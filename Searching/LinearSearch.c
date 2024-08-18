# include <stdio.h>

int linearSearch(int arr[], int size, int element){
    for(int i = 0; i < size; i++){
        if(arr[i] == element){
            return 1;
        }
    }

    return 0;
}

int main(){
    int arr[] = {11, 223, 23, 8, 4, 87};
    int size = sizeof(arr)/sizeof(arr[0]);

    int result = linearSearch(arr, size, 3);
    printf("%d", result);
    return 0;
}
