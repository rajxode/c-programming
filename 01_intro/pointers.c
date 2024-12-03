#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 5;

    printf("value of a: %d\n", a);
    printf("Address of variable a: %p\n", &a);

    // store address of a
    int *pA = &a;
    printf("address of a using pointer variable: %p\n", pA);

    printf("value at pointer pA using pointer variable: %d\n", *pA);

    return 0;
}