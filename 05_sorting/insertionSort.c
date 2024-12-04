#include <stdio.h>
#include <stdlib.h>

// function to perform insertion sort on an array
void insertionSort(int *arr, int size) {
    for(int i=1; i<size;i++) {
        int min = i;
        for(int j=i-1; j>=0; j--) {
            // compare the element at 'i' index to all the elements after it
            // if element after i is smaller than i then swap elements
            if(arr[min] < arr[j]) {
                int temp = arr[j];
                arr[j] = arr[min];
                arr[min] = temp;
                min = j;
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
    insertionSort(arr,5);

    // print output
    printf("Sorted array: ");
    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0; 
}