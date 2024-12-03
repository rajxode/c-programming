#include <stdio.h>
#include <stdlib.h>

void printNFibNum(int n) {
    printf("for printing %d numbers of fib series\n", n);
    int first = 0, second = 1, third;
    printf("%d %d",first, second);
    int index = 3;
    while (index <= n) {
        third = second + first;
        printf(" %d ", third);
        first = second;
        second = third;
        index++;
    }
}

void printFibTillN(int n) {
    printf("\nfor printing fib series till %d\n", n);
    int first = 0, second = 1, third;
    if(n == 0 ) {
        printf("%d\n", first);
    } else {
        printf("%d %d",first, second);
        while ((first + second) <= n) {
            third = first + second;
            printf(" %d ",third);
            first = second;
            second = third;
        }
    }
}

int main(){
    int limit;
    
    printf("Enter no. of elements in fib series: ");
    scanf("%d",&limit);

    if(limit == 0) {
        printf("Invalid limit\n");
        return 0;
    }

    if(limit == 1) {
        printf("%d\n",0);
    } else{
        printNFibNum(limit);
        printFibTillN(limit);
    }

    return 0;
}