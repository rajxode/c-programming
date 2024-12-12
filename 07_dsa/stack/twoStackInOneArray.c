#include <stdio.h>

#define MAX_SIZE 100

// first the first stack from array
void printFirstStack(int *arr,int top1) {
    // check whether stack is empty
    if(top1 == -1) {
        printf("Stack 1 underflow\n");
        return;
    }
    // print the stack
    for(int i=0;i<=top1;i++) {
        printf("%d, ",arr[i]);
    }
    printf("\n");
}

// print the second stack
void printSecondStack(int *arr, int top2) {
    // check whether the second stack is empty
    if(top2 == MAX_SIZE) {
        printf("Stack 2 underflow\n");
        return;
    }
    // print the second stack
    for(int i=MAX_SIZE-1; i>=top2; i--) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

// push in the first stack
int pushInFirst(int *arr, int top1, int top2) {
    // check if space available
    if ( top1 < top2 - top1 - 1) {
        printf("Enter data: ");
        // push new element
        scanf("%d", &arr[++top1]);
        return top1;
    } else {
        printf("Stack overflow\n");
        return top1;
    }
}

// push in second array
int pushInSecond(int *arr, int top1, int top2) {
    // check if space available
    if ( top2 > top2 - top1 - 1) {
        printf("Enter data: ");
        // push new element
        scanf("%d", &arr[--top2]);
        return top2;
    } else {
        printf("Stack overflow\n");
        return top2;
    }
}

// pop from first stack
int popFromFirst(int *arr, int top1) {
    // is stack 1 empty
    if(top1 == -1) {
        printf("Stack underflow\n");
        return top1;
    }
    printf("Element poped out of stack1\n");
    top1--;
    return top1;
}

// pop from second stack
int popFromSecond(int *arr, int top2) {
    // check if second stack empty
    if(top2 == MAX_SIZE) {
        printf("Stack underflow\n");
        return top2;
    }
    printf("Element poped out of stack1\n");
    top2++;
    return top2;
}

// top element of first stack
void peekFirst(int *arr, int top1) {
    // if stack empty
    if(top1 == -1) {
        printf("Stack underflow\n");
        return;
    }
    printf("Top of stack 1: %d\n", arr[top1]);
    return;
}

// top element of second stack
void peekSecond(int *arr, int top2) {
    // if stack 2 is empty
    if(top2 == MAX_SIZE) {
        printf("Stack underflow\n");
        return;
    }
    printf("Top of stack 2: %d\n", arr[top2]);
    return;
}


int main () {
    int arr[MAX_SIZE], top1 = -1, top2 = MAX_SIZE, ch;

    printf("1. Push in 1st.\n");
    printf("2. Push in 2nd.\n");
    printf("3. Pop from 1st.\n");
    printf("4. Pop from 2nd.\n");
    printf("5. Peek 1st.\n");
    printf("6. Peek 2nd.\n");
    printf("7. Print 1st.\n");
    printf("8. Print 2nd.\n");
    printf("press 0 for exit.\n");

    do {
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                top1 = pushInFirst(arr, top1, top2);
                break;
            
            case 2:
                top2 = pushInSecond(arr, top1, top2);
                break;

            case 3:
                top1 = popFromFirst(arr,top1);
                break;

            case 4:
                top2 = popFromSecond(arr, top2);
                break;

            case 5:
                peekFirst(arr,top1);
                break;
            
            case 6:
                peekSecond(arr,top2);
                break;

            case 7:
                printFirstStack(arr,top1);
                break;

            case 8:
                printSecondStack(arr,top2);
                break;

            default:
                break;
        }
    } while( ch != 0);

    return 0;
}