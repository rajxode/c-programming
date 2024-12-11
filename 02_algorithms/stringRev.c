#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char str[50];
    // get input string
    printf("Enter the string: ");
    scanf("%s",str);

    // loop from start and end, swap elements
    int i = 0, j = strlen(str) - 1;
    while (i<j) {
        char ch = str [i];
        str[i] = str[j];
        str[j] = ch;
        i++;
        j--;
    }

    // print reversed string
    printf("reversed string is: %s\n", str);
    return 0;
}