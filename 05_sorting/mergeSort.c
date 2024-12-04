#include <stdio.h>
#include <stdlib.h>

// function for priting array
void printArray(int *arr) {
    for(int i=0; i<5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// fucntion for merging sorted arrays
void merge(int *arr, int low, int mid, int high) {
    // array for storing the result
    int result1[high-low];
    int i=low, j=mid+1, k=0;
    
    while(i <= mid && j <= high) {
        if(arr[i] < arr[j]) {
            result1[k] = arr[i];
            i++;
        } else if ( arr[i] > arr[j]) {
            result1[k] = arr[j];
            j++;
        } else {
            result1[k] = arr[i];
            i++, j++;
        }
        k++;
    }

    while(i<=mid) {
        result1[k] = arr[i];
        i++, k++;
    }

    while (j<=high) {
        result1[k] = arr[j];
        j++, k++;
    }
    
    // update the actual array with sorted values
    k = 0, i = low;
    while(i <= high) {
        arr[i] = result1[k];
        k++,i++;
    }
    return;
}

// recursive mergeSort function
void mergeSort(int *arr, int low, int high) {
    if(low >= high) {
        return;
    }
    int mid = (low+high)/2;
    mergeSort(arr,low,mid);
    mergeSort(arr,mid+1,high);
    // merging the two sorted array from above
    merge(arr,low,mid,high);
}

int main() {
    int arr[5];
    printf("Enter the elements: ");
    for(int i=0; i< 5; i++) {
        scanf("%d", &arr[i]);
    }
    mergeSort(arr,0,4);
    printf("Sorted array: ");
    printArray(arr);

    return 0;
}