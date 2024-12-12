#include <stdio.h>

// print the stack
void printStack(int *stack, int top) {
    for(int i=0; i<top; i++) {
        printf("%d, ", stack[i]);
    }
    printf("\n");
}


int main () {
    // store array, top index
    int stack[5],ch,top=0;

    // operation option
    printf("1. Push\n");
    printf("2. Pop\n");
    printf("3. Peek\n");
    printf("4. Print\n");
    printf("press 0 for exit.\n");

    do {
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                // if stack full
                if(top == 5) {
                    printf("Stack overflow\n");
                } else {
                    // append the element at last index
                    printf("Enter data: ");
                    scanf("%d", &stack[top]);
                    top++;
                }
                break;
            
            case 2:
                // if stack is empty
                if(top == 0) {
                    printf("Stack underflow\n");
                } else {
                    // remove the last element from the stack
                    printf("Element poped\n");
                    top--;
                }
                break;

            case 3:
                // if stack is empty
                if(top==0) {
                    printf("Stack underflow");
                } else {
                    // print the last elment from the stack
                    printf("%d\n", stack[top-1]);
                }
                break;

            case 4:
                // if stack empty 
                if(top==0) {
                    printf("Stack underflow");
                } else {
                    // print the whole stack
                    printStack(stack,top);
                }
                break;


            default:
                break;
        }
    } while( ch != 0);

    return 0;
}