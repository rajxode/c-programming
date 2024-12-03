#include <stdio.h>
#include <stdlib.h>

int factWithRecursion(int n) {
    if(n <= 1) {
        return 1;
    }
    return n * factWithRecursion(n-1);
}

int factWithoutRecursion(int n) {
    int fact = 1;
    while (n > 0) {
        fact = fact * n;
        n--;
    }
    return fact;
}

int main () {
    int n;
    printf("Enter the number to find factorial: ");
    scanf("%d",&n);

    int result = factWithRecursion(n);
    printf("Factorial of %d is: %d\n",n,result);

    int result2 = factWithoutRecursion(n);
    printf("Factorial of %d without rec. is: %d\n",n,result2);

    return 0;
}