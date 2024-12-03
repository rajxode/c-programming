#include <stdio.h>
#include <stdlib.h>

int main() {
    
    // creating a new txt file in write mode
    FILE *pFile = fopen("first.txt", "w");

    if(pFile == NULL) {
        printf("Error in file creation\n");
        return 1;
    }

    // writing inside the file
    fprintf(pFile, "Hello World, this is the first line in this file");

    // close the file 
    fclose(pFile);
    printf("Data written in the file\n");

    return 0;
}