#include <stdio.h>
#include <stdlib.h>

// find write index of pivot element and arrange elements in the array according to pivot element
int quickHelper(int *arr, int low, int high, int pivot) {
    int i = low, j = high;
    while(i<=j) {
        while(arr[i] < pivot) {
            i++;
        }
        while(arr[j] >= pivot) {
            j--;
        }
        if( i<=j) {
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++, j--;
        }
    }
    // swap pivot with its right index
    int temp = arr[i];
    arr[i] = pivot;
    arr[high] = temp;

    // return actual index of pivot element 
    return i;
}


void quickSort(int *arr, int low, int high) {
    if(low > high) {
        return;
    }
    // pivot element
    int pivot = arr[high];
    // getting right index of pivot element
    int pI = quickHelper(arr,low,high,pivot);
    // sort left part
    quickSort(arr, low, pI-1);
    // sort right part
    quickSort(arr, pI+1, high);
}

int main () {
    int arr[7];
    printf("Enter array elements: ");
    for(int i=0; i< 7; i++) {
        scanf("%d", &arr[i]);
    }
    quickSort(arr,0,6);
    printf("Sorted Array: ");
    for(int i=0; i<7; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}