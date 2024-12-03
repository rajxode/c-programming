#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat1[2][2], mat2[2][2];

    printf("Enter the elements of first matrix: \n");
    for(int i=0; i<2;i++) {
        for(int j=0; j<2; j++) {
            scanf("%d", &mat1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of second matrix: \n");
    for(int i=0; i<2;i++) {
        for(int j=0; j<2; j++) {
            scanf("%d", &mat2[i][j]);
        }
        printf("\n");
    }

    printf("Product of the two matrix: \n");
    for(int i=0;i<2;i++) {
        for(int j=0;j<2;j++) {
            int sum=0;
            for(int k=0; k<2;k++) {
                sum = sum + (mat1[i][k] * mat2[k][j]); 
            }
            printf("%d ", sum);
        }
        printf("\n");
    }

    return 0;
}