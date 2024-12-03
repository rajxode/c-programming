#include <stdio.h>
#include <stdlib.h>

int main() {
    // opening file in append mode
    FILE *pfile = fopen("first.txt", "a");

    if(pfile == NULL) {
        printf("Error in opening file\n");
        return 1;
    }
    
    // append data inside of the file
    fprintf(pfile,"\nThis is the second line inside the file");

    // close file
    fclose(pfile);
    printf("Data appended successfully in the file\n");

    return 0;
}