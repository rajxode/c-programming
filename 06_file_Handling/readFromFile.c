#include <stdio.h>
#include <stdlib.h>

int main() {
    // opening file in read mode
    FILE *pfile = fopen("first.txt", "r");
    // for storing line, while reading file
    char line[100];

    if(pfile == NULL) {
        printf("Error in opening file\n");
        return 1;
    }

    // read data from file, line by line
    while((fgets(line, sizeof(line), pfile))){
        printf("%s", line);
    }

    // close file
    fclose(pfile);

    return 0;
}