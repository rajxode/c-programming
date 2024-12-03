#include <stdio.h>

// function to search an element in the given array
int linearSearch(int arr[], int size , int find) {
    for(int i =0; i<size; i++) {
        if(arr[i] == find) {
            // if found return index
            return i;
        }
    }
    // if not found, return -1
    return -1;
}

void main() {
    int arr[5], find;

    // initialize the array with values
    printf("Enter elements of the array: ");
    for(int i=0; i<5; i++){
        scanf("%d", &arr[i]);
    }

    // element to find in the array
    printf("Enter element to search in the array: ");
    scanf("%d", &find);

    // call search function
    int index = linearSearch(arr, 5, find);

    // if not found
    if(index == -1) {
        printf("Element not found in the array\n");
    } else {
        // if found
        printf("Element found at the index: %d\n", index);
    }

    return;
}