#include <stdio.h>
#include <stdlib.h>

int main() {
    // for storing intergers
    int num = 1;
    // for storing characters
    char character = 'A';
    // for storing small decimal values
    float fNum = 1.2;
    // for storing large decimal values
    double dNum = 4.3447509821348;
    // array of char for storing strings
    char string[] = "Hello World";

    // printing all the datatype with their values
    printf("number: %d\n",num);
    printf("character: %c\n",character);
    printf("float: %f\n",fNum);
    printf("double: %lf\n",dNum);
    printf("string: %s\n",string);

    return 0;
}