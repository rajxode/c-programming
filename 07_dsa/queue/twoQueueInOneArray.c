#include <stdio.h>

#define MAX_SIZE 10

void printFirstQueue(int *arr, int front1, int rear1) {
    // if queue is empty
    if(front1 == -1) {
        printf("Queue is empty\n");
        return;
    }
    // loop of queue
    for(int i=front1; i<=rear1; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

void printSecondQueue(int *arr, int front2, int rear2) {
    // if queue is empty
    if(front2 == MAX_SIZE) {
        printf("Queue is empty\n");
        return;
    }
    // loop of queue
    for(int i=front2; i>=rear2; i--) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int enqueueFirst(int *arr, int rear1) {
    printf("Enter data: ");
    scanf("%d", &arr[++rear1]);
    return rear1;
}

int enqueueSecond(int *arr, int rear2) {
    printf("Enter data: ");
    scanf("%d", &arr[--rear2]);
    return rear2;
}

int dequeueFirst(int *arr, int front1) {
    // if queue is empty
    if(front1 == -1) {
        printf("Queue is empty");
        return front1;
    }
    return ++front1;
}

int dequeueSecond(int *arr, int front2) {
    // if queue is empty
    if(front2 == MAX_SIZE) {
        printf("Queue is empty");
        return front2;
    }
    return --front2;
}

void peek(int *arr, int front) {
    // is empty
    if(front == -1 || front == MAX_SIZE){
        printf("Queue is empty.\n");
        return;
    }
    printf("Top: %d\n",arr[front]);
    return;
}

int main() {
    int arr[MAX_SIZE], front1 = -1, rear1 = -1, front2 = MAX_SIZE, rear2 = MAX_SIZE, newFront;
    int ch;

    printf("1. Enqueuq in 1st.\n");
    printf("2. Enqueuq in 2nd.\n");
    printf("3. Dequeuq from 1st.\n");
    printf("4. Dequeuq from 2nd.\n");
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
                if(rear1 < rear2 - 1) {
                    rear1 = enqueueFirst(arr, rear1);
                    if(front1 == -1) {
                        front1 = rear1;
                    }
                } else {
                    printf("Queue is full\n");
                }
                break;
            
            case 2:
                if(rear1 < rear2 -1) {
                    rear2 = enqueueSecond(arr, rear2);
                    if(front2 == MAX_SIZE ){
                        front2 = rear2;
                    }
                } else {
                    printf("Queue is full\n");
                }
                break;

            case 3:
                newFront = dequeueFirst(arr, front1);
                if(front1 == rear1) {
                    front1 = rear1 = -1;
                } else {
                    front1 = newFront;
                }
                break;

            case 4:
                newFront = dequeueSecond(arr, front2);
                if(front2 == rear2) {
                    front2 = rear2 = MAX_SIZE;
                } else {
                    front2 = newFront;
                }
                break;

            case 5:
                peek(arr,front1);
                break;
            
            case 6:
                peek(arr,front2);
                break;

            case 7:
                printFirstQueue(arr,front1, rear1);
                break;

            case 8:
                printSecondQueue(arr,front2, rear2);
                break;

            default:
                break;
        }
    } while( ch != 0);

    return 0;
}