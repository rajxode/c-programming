#include <stdio.h>

#define MAX_SIZE 10

// print the queue
void printQueue(int *arr, int front, int rear) {
    // if queue is empty
    if(front == -1) {
        printf("Queue is empty\n");
        return;
    }
    // loop of queue
    for(int i=front; i<=rear; i++) {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

// add new element in the queue
int enqueue(int *arr, int rear) {
    // if queue is full
    if(rear == MAX_SIZE) {
        printf("Stack Overflow\n");
        return rear;
    }
    printf("Enter data: ");
    scanf("%d", &arr[++rear]);
    return rear;
}

// remove first element from queue
int dequeue(int *arr, int front) {
    // if queue is empty
    if(front == -1) {
        printf("Queue is empty");
        return front;
    }
    return ++front;
}

// front element of the queue
void peek(int *arr, int front) {
    // is empty
    if(front == -1){
        printf("Queue is empty.\n");
        return;
    }
    printf("Top: %d\n",arr[front]);
    return;
}


int main() {
    int arr[MAX_SIZE], front = -1, rear = -1, ch, newFront;
    
    printf("1. Enqueue\n");
    printf("2. Dequeue\n");
    printf("3. Peek\n");
    printf("4. Print\n");
    printf("press 0 for exit.\n");

    do {
        printf("Enter choice: ");
        scanf("%d", &ch);

        switch (ch)
        {
            case 1:
                rear = enqueue(arr,rear);
                // for first element
                if(front == -1) {
                    front = rear;
                }
                break;
            
            case 2:
                newFront = dequeue(arr,front);
                // for only one element
                if(front == rear) {
                    front = rear = -1;
                } else {
                    front = newFront;
                }
                break;

            case 3:
                peek(arr,front);
                break;

            case 4:
                printQueue(arr,front,rear);
                break;

            default:
                break;
        }
    } while( ch != 0);

    return 0;
}