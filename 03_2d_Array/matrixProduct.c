#include <stdio.h>
#include <stdlib.h>

int main() {
    int mat1[10][10], mat2[10][10];
    int r1, c1, r2, c2;

    printf("Rows and column for first matrix: ");
    scanf("%d %d",&r1, &c1);

    printf("Rows and column for second matrix: ");
    scanf("%d %d",&r2, &c2);

    printf("Enter the elements of first matrix: \n");
    for(int i=0; i<r1;i++) {
        for(int j=0; j<c1; j++) {
            scanf("%d", &mat1[i][j]);
        }
        printf("\n");
    }

    printf("Enter the elements of second matrix: \n");
    for(int i=0; i<r2;i++) {
        for(int j=0; j<c2; j++) {
            scanf("%d", &mat2[i][j]);
        }
        printf("\n");
    }

    printf("Product of the two matrix: \n");
    for(int i=0;i<r1;i++) {
        for(int j=0;j<c2;j++) {
            int sum=0;
            for(int k=0; k<c1;k++) {
                sum = sum + (mat1[i][k] * mat2[k][j]); 
            }
            printf("%d ", sum);
        }
        printf("\n");
    }

    return 0;
}