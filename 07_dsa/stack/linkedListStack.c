#include <stdio.h>
#include <stdlib.h>

// single node of stack
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// check if stack is empty
int isEmpty(Node *head) {
    if (head == NULL) {
        return 1;
    } else {
        return 0;
    }
}

// print the whole stack
void printList(Node *head) {
    int result = isEmpty(head);
    if(result == 1) {
        printf("Stack underflow\n");
        return;
    }
    Node *temp = head;
    while (temp != NULL) {
        printf("%d, ", temp->data);
        temp = temp -> next;
    }
    printf("\n");
}

// pop the top element from the stack
Node* pop(Node *head) {
    // check if stack empty
    int result = isEmpty(head);
    if(result == 1) {
        printf("Stack underflow\n");
        return head;
    }
    // remove the top
    Node *temp = head;
    head = temp ->next;
    free(temp);
    // return updated head
    return head;
}

// function for creating a new node
Node* createNode(int data) {
    Node *newNode = (Node *)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

// for pushing a new node in the stack 
Node* push(Node *head, int data) {
    Node *temp = createNode(data);
    if(temp == NULL) {
        printf("Stack overflow\n");
        return head;
    }
    temp -> next = head;
    head = temp;
    return head;
}

// return the top element
void peek(Node *head) {
    int result = isEmpty(head);
    if(result == 1) {
        printf("Stack underflow\n");
        return ;
    }
    printf("Top: %d\n", head->next);
    return;
}



int main() {
    Node *head = NULL, *temp = NULL;
    int ch;

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
                int data;
                printf("Enter data: ");
                scanf("%d", &data);
                head = push(head, data);
                break;
            
            case 2:
                head = pop(head);
                break;

            case 3:
                peek(head);
                break;

            case 4:
                printList(head);
                break;


            default:
                break;
        }
    } while( ch != 0);

    return 0;
    
}