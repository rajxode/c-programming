#include <stdio.h>
#include <stdlib.h>

// function to perform selection sort on an array
void selectionSort(int *arr, int size) {
    for(int i=0; i<size;i++) {
        for(int j=i+1; j<size; j++) {
            // compare the element at 'i' index to all the elements "after" it
            // if element "after" i is smaller than i then swap elements
            if(arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int arr[5];
    printf("Enter elements of the array: ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    // call function
    selectionSort(arr,5);

    // print output
    printf("Sorted array: ");
    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0; 
}