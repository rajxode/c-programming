#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// function to check whether given string is palindrome or not
int checkPalindrom(char str[]) {
    // size of string
    int size = strlen(str);
    int mid = (size-1) / 2;
    int i=0, j=size-1;
    // traverse from start and end, compare elements
    while(i<=mid && j >= mid) {
        if(str[i] != str[j]) {
            // if element not match, return
            return -1;
        }
        i++,j--;
    }

    // outside loop, all elements matched
    return 1;
}

int main() {
    char str[30];
    printf("Enter a word: ");
    scanf("%s", str);
    int result = checkPalindrom(str);
    if(result == -1 ) {
        printf("Not palindrome \n");
    } else {
        printf("Palindrome\n");
    }
    return 0;
}