#include <stdio.h>
#include <stdlib.h>

int main() {
    int numArray[] = {1,2,3,4,5};
    char string[] = "this is a string";

    printf("The array elements are: ");
    for (int i = 0; i<5; i++) {
        printf("%d ", numArray[i]);
    }
    printf("\nThe string is: %s\n", string);

    int arr2[5];
    char str2[5];

    printf("Enter int array elements: ");
    for(int i = 0; i < 5; i++) {
        scanf("%d", &arr2[i]);
    }

    printf("\nYou have entered:");
    for(int i = 0; i<5; i++) {
        printf("%d ", arr2[i]);
    }

    while((getchar()) != '\n');
    printf("\nEnter char array: ");
    for(int i = 0; i < 5; i++) {
        scanf("%c ", &str2[i]);
    }

    printf("You have entered string: ");
    for(int i = 0; i < 5; i++) {
        printf("%c", str2[i]);
    }

    return 0;
}