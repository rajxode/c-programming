#include <stdio.h>
#include <stdlib.h>

int main (){
    int mat[3][3], matTrans[3][3];

    // input of a 2d matrix
    printf("Enter elements of the matrix:\n");
    for(int i = 0; i<3; i++) {
        for (int j=0; j<3;j++) {
            scanf("%d",&mat[i][j]);
        }
        printf("\n");
    }

    // transpose of matrix
    printf("Transpose of the matrix is:\n");
    for(int i = 0; i<3; i++) {
        for (int j=0; j<3;j++) {
            printf("%d ",mat[j][i]);
        }
        printf("\n");
    }

    return 0;
}