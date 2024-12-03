#include <stdio.h>
#include <stdlib.h>

// function doesn't return anything
void firstFun() {
    printf("First function without any parameters and return value\n");
}

// function accept a string type param, but return nothing
void second(char str[20]) {
    printf("second function with a parameter and no return value, param: %s\n", str);
}

// function returning int
int third() {
    printf("third function with an int return value but no params\n");
    return 2;
}

// function accepting int param and returning int value
int fourth (int a) {
    printf("fourth function with both return type and param, param: %d\n", a);
    return (a * a);
}

int main() {
    
    printf("inside main function, now calling each function\n");

    firstFun();
    second("hello world");
    int a = third();
    printf("Returned value from third: %d\n",a);
    int b = fourth(a);
    printf("Returned value from fourth: %d\n",b);

    return 0;
}