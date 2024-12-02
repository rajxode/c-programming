
#include <stdio.h>

int main() {
    int num;
    char first;
    float fNum;
    double dNum;
    char string[20];
    
    printf("Enter Number: ");
    scanf("%d",&num);
    
    // flush the input buffer
    while((getchar()) != '\n');
    
    printf("Enter character: ");
    scanf("%c",&first);
    
    printf("Enter float: ");
    scanf("%f",&fNum);
    
    printf("Enter double: ");
    scanf("%lf", &dNum);
    
    // flush input buffer
    while((getchar()) != '\n');
    
    printf("Enter the string: ");
    scanf("%s", string);
    
    
    printf("You entered number %d, char %c, float %f, double %lf and string %s",num,first,fNum,dNum,string);

    return 0;
}