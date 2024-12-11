#include <stdio.h>

int binarySearch(int *arr, int low, int high, int find) {
    int start = low, end = high;
    while(start <= end) {
        int mid = (start + end) / 2;
        if(arr[mid] == find) {
            return mid;
        } else if(arr[mid] > find) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return -1;
}

void main() {
    int arr[] = {1,2,3,4,5};
    printf("result : %d", binarySearch(arr, 0, 4, 3));
    return;
}