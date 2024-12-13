#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;


// print queue
void printList(Node *front) {
    if(front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    Node *temp = front;
    while (temp != NULL) {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// create a new node
Node* createNode(int data) {
    Node *newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

// add a new node in the queue
Node* enQueue(Node *rear) {
    int data;
    printf("Enter data: ");
    scanf("%d",&data);
    Node *newNode = createNode(data);
    if(newNode == NULL) {
        printf("Queue is full\n");
        return rear;
    }
    if(rear != NULL) {
        rear -> next = newNode;
    }
    rear = newNode;
    return rear;
}

// remove a first node from queue
Node* deQueue(Node *front) {
    if(front == NULL) {
        printf("Queue is empty\n");
        return front;
    }
    Node *newNode = front;
    front = newNode -> next;
    free(newNode);
    return front;
}

// print front element
void peek(Node *front) {
    if(front == NULL) {
        printf("Queue is empty\n");
        return;
    }
    printf("Top: %d\n", front->data);
    return;
}


int main() {
    Node *front = NULL, *rear = NULL;
    int ch;

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
                rear = enQueue(rear);
                if(front == NULL) {
                    front = rear;
                }
                break;
            
            case 2:
                front = deQueue(front);
                if(front == NULL) {
                    rear = NULL;
                }
                break;

            case 3:
                peek(front);
                break;

            case 4:
                printList(front);
                break;


            default:
                break;
        }
    } while( ch != 0);
    
    return 0;
}

