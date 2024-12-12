#include <stdio.h>
#include <string.h>

// check substring using inbuilt function
int inBuiltSubStr(char *s1, char *s2) {
    if(strstr(s1,s2)) {
        return 1;
    } else {
        return 0;
    }
}

// manual check of sub string
int manualCheck(char *s1, char*s2) {
    int i, j;
    // loop over main string
    for (i=0; s1[i] != '\0'; i++) {

        // if first char of substring is found
        if(s1[i] == s2[0]) {
            // loop of each char to check the whole substring
            for (j=0; s2[j] != '\0'; j++) {
                // if any char doesn't match
                if(s1[i+j] != s2[j]) {
                    break;
                }
            }

            // if whole substring found
            if(s2[j] == '\0') {
                return 1;
            }
        }
    }
    // not a substring
    return 0;
}


int main() {
    char s1[100], s2[100];
    printf("Enter main string: ");
    scanf("%s", s1);
    printf("Enter the substring to check: ");
    scanf("%s", s2);

    int result = inBuiltSubStr(s1,s2);
    if(result == 1) {
        printf("%s is a substring of %s\n", s2, s1);
    } else {
            printf("%s is not a substring of %s\n", s2, s1);
    }
}