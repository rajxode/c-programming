#include <stdio.h>

// function to search a number using binary search 
int binarySearch(int arr[], int low, int high, int find) {
    // base case
    // if staring index of array is greater than ending index, element not found
    if(low > high) {
        return -1;
    }
    // find middle element
    int mid = (low + high) / 2;
    // if element found at middle
    if( arr[mid] == find) {
        // return index
        return mid;
    } else if ( arr[mid] > find) {
        // if element is less than the mid element, find in left side elements
        return binarySearch(arr, low, mid, find);
    } else {
        // element is greater than mid, look in right side
        return binarySearch(arr, mid+1, high, find);
    }
}

void main() {
    int arr[5], find;

    // array value
    printf("Enter elements of the array: ");
    for(int i=0; i<5; i++) {
        scanf("%d", &arr[i]);
    }

    // element to be found
    printf("Enter element to find in the array: ");
    scanf("%d",&find);

    // index of found element
    int index = binarySearch(arr,0,4,find);
    // if not found
    if(index == -1) {
        printf("Element not found\n");
    } else {
        // if found, show index
        printf("Element found at index: %d\n", index);
    }

    return;
}