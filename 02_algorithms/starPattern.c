#include <stdio.h>

int main() {

    int size = 5;

    /*
        first pattern
        * 
        * * 
        * * * 
        * * * *
        * * * * *
    */
    for (int i=0; i < size; i++) {
        for (int j=0; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /*
        seoncd pattern, reverse of first one
        * * * * * 
        * * * * 
        * * * 
        * *
        *
    */
    printf("second pattern\n");
    for (int i=size-1; i >= 0; i--) {
        for (int j=0; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    /*
        third pattern, mirror of first one
            *
           **
          ***
         ****
        *****
    */
    printf("third pattern\n");
    for (int i=0; i < size; i++) {
        
        for(int k = size-1-i; k >0; k--) {
            printf(" ");
        }

        for (int j=0; j<=i; j++) {
            printf("*");
        }
        printf("\n");
    }

    /*
        fourth pattern, complete pyramid
            *
           ***
          *****
         *******
        *********
    */
    printf("fourth pattern\n");
    for (int i=0; i < size; i++) {
        
        for(int k = size-1-i; k >0; k--) {
            printf(" ");
        }

        for (int j=0; j<=2*i; j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}