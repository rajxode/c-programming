#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat1[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    for ( int i =0; i < 3; i++) {
        for ( int  j =0; j < 3; j++) {
            printf("%d ", mat1[i][j]);
        }
        printf("\n");
    }

    int mat2[3][3];

    // taking input for 2d array
    printf("Enter values for matrix: ");
    for ( int i = 0; i < 3; i++) {
        for ( int j=0; j< 3; j++) {
            scanf("%d ", &mat2[i][j]);
        }
        printf("\n");
    }


    // printing 2d array
    printf("You have entered following matrix:\n");
    for ( int i =0; i < 3; i++) {
        for ( int  j =0; j < 3; j++) {
            printf("%d ", mat2[i][j]);
        }
        printf("\n");
    }


    return 0;
}