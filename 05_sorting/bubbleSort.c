#include <stdio.h>
#include <stdlib.h>

// function to perform bubble sort on an array

// using for loop
void bubbleSortFor(int *arr, int size) {
    for(int i=size; i>0; i--) {
        for(int j=0; j< i-1; j++) {
            //compare element at j index with j+1
            // if element at j is greater than j+1, swap
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    return;
}

// using while loop
void bubbleSortWhile(int *arr, int size) {
    while(size > 0) {
        int i = 0;
        while(i<size -1) {
            //compare element at i index with i+1
            // if element at i is greater than i+1, swap
            if(arr[i] > arr[i+1]) {
                int temp = arr[i+1];
                arr[i+1] = arr[i];
                arr[i] = temp;
            }
            i++;
        }
        size--;
    }

    return;
}

int main() {
    int arr[5];
    printf("Enter elements of the array: ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    // call function
    bubbleSortWhile(arr,5);

    // print output
    printf("Sorted array: ");
    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0; 
}