#include <stdio.h>
#include <stdlib.h>

int main () {

    int i = 1;

    // while loop
    while( i < 3) {
        printf("inside while loop i: %d\n", i);
        i++;
    }


    // do while loop
    do{
        printf("inside do while loop i: %d\n", i);
        i++;
    } while( i < 3 );


    // for loop
    for(;i<10;i++) {
        printf("inside for loop i: %d\n", i);
    }

    return 0;
}