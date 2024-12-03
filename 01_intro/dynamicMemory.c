#include <stdio.h>
#include <stdlib.h>

int main() {

    /*
        Malloc: dynamically allocate a block of given size
    */
    int *ptr1 = (int*)malloc(sizeof(int) * 10);

    /*
        Calloc: dynamically allocate number of blocks of given size
    */
    int *ptr2 = (int*)calloc(10, sizeof(int));

    if(ptr1 == NULL || ptr2 == NULL) {
        printf("Memory allocation failed !!\n");
        free(ptr1);
        free(ptr2);
        return 1;
    }

    printf("Malloc array's length: %d, size: %d\n", 10, sizeof(ptr1) * 10);
    printf("Calloc array's length: %d, size: %d\n",10, sizeof(int) * 10);

    /*
        Realloc: reallocate size of an already allocated block
    */
    int *temp = (int*)realloc(ptr2, sizeof(int) * 3);

    if(temp == NULL) {
        printf("Memory allocation failed!!\n");
        free(ptr1);
        free(ptr2);
        return 1;
    }

    ptr2 = temp;

    printf("Relloc array's length: %d, size: %d\n",3, sizeof(int) * 3); 

    /*
        assigning values to the dynamic array
    */
    printf("Enter values for array:");
    for(int i=0; i<5; i++) {
        scanf("%d", &ptr2[i]);
    }

    /*
        traverse the dynamic array
    */
    printf("Entered values: ");
    for(int i=0; i<5; i++) {
        printf("%d ", ptr2[i]);
    }


    /*
        free() => deallocate the allocated memory 
    */
    free(ptr1);
    free(ptr2);
    return 0;
}