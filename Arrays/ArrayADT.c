

#include<stdio.h>
#include<stdlib.h>

// Creating the custom structure of an Array.
struct myArray{
    int totalSize;
    int usedSize;
    int *ptr;
};

// Creating new Array.
void createArray(struct myArray *a, int tSize, int uSize){
    a->totalSize = tSize;   
    a->usedSize = uSize;
    a->ptr = (int *) malloc(tSize * sizeof(int));
}

// To set the values in the Array.
void setVal(struct myArray *a){
    int n;
    for(int i=0; i < a->usedSize; i++){
        printf("Enter element %d: ", i);
        scanf("%d", &n);
        (a->ptr)[i] = n;
    }
}

// To print the values from Array.
void show(struct myArray *a){
    for(int i=0; i < a->usedSize; i++){
        printf("%d ", (a->ptr)[i]);
    }
}

int main(){
    struct myArray marks;
    createArray(&marks, 10, 2);
    printf("==== Set values ====\n");
    setVal(&marks);
    printf("\n==== show values ====\n");
    show(&marks);
    return 0;
}