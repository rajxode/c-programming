#include <stdio.h>
#include <stdlib.h>

// common function to read value inside an array
void readArray(int *arr, int size) {
    for(int i=0; i<size;i++) {
        scanf("%d", &arr[i]);
    }
}

// function to merge two sorted arrays in a new one
void mergeArray(int *arr1, int *arr2, int *arr3, int size1, int size2) {
    int i = 0, j=0, k=0;

    // while both i and j are within their size limits, i for size1 and j for size2
    while(i<size1 && j<size2) {
        // if element at i is small, swap
        if(arr1[i] < arr2[j]) {
            arr3[k] = arr1[i];
            i++;
        // if element at j is small, swap
        } else if( arr1[i] > arr2[j]) {
            arr3[k] = arr2[j];
            j++;
        // both are equal, append and move to next index 
        } else {
            arr3[k] = arr1[i];
            i++, j++;
        }
        k++;
    }

    // append all the remaining elements of first array if any
    while(i<size1) {
        arr3[k] = arr1[i];
        i++, k++;
    }

    // append all the elements of second array if any
    while (j<size2)
    {
        arr3[k] = arr2[j];
        j++, k++;
    }
    
    return;
}



int main () {
    int arr1[5], arr2[5], arr3[10];
    printf("Enter first sorted array: ");
    readArray(arr1, 5);

    printf("Enter second sorted array: ");
    readArray(arr2, 5);

    mergeArray(arr1, arr2, arr3, 5, 5);

    printf("The sorted array: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr3[i]);
    }
    
    return 0;
}