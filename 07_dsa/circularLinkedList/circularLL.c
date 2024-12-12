#include <stdio.h>
#include <stdlib.h>

// structure of node
struct Node {
    int data;
    struct Node *next;
};


// function to print the linked list
void printList(struct Node*head) {
    struct Node *temp = head;
    while (temp->next != head) {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("%d, ", temp->data);
    printf("\n");
}


// function to add a new node in the list
// return the address of newly added node
struct Node* appendItem() {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter value of node: ");
    scanf("%d", &newNode->data);
    newNode->next = NULL;
    return newNode;
}


// delete a node with given key
// return the head
struct Node* deleteNode(struct Node *head, int key) {
    struct Node *temp = head, *prev = NULL;

    // if element is present at the head itself
    if(temp != NULL && temp->data == key) {
        head = temp->next;
        struct Node *tail = temp;
        while (tail->next != temp) {
            tail = tail -> next;
        }
        tail->next = head;
        free(temp);
        return head;
    }

    // finding the node with the key
    while(temp != NULL && temp->data != key) {
        prev = temp;
        temp = temp->next;
    }

    // if not exists
    if (temp == NULL) {
        printf("Element doesn't exist in the list.\n");
        return head;
    }

    // remove the node
    prev->next = temp->next;
    free(temp);
    // return head
    return head;
}

int main () {
    // pointer variables
    struct Node *head=NULL, *temp=NULL, *newNode=NULL;
    int choice;

    printf("1. Insert At End\n");
    printf("2. Print List\n");
    printf("3. Delete An Element\n");
    printf("Press 0 for exit\n");

    do {
        printf("Enter choice: ");
        scanf("%d", &choice);

        // swtich case for all the operations
        switch (choice)
        {   
            // appending new elements at the end of the list
            case 1:
                newNode = appendItem();
                // for the first element in the list
                if( head == NULL) {
                    head = temp = newNode;
                } else {
                    temp -> next = newNode;
                    temp = newNode;
                    temp -> next = head;
                }
                break;
            
            // print the list
            case 2:
                printList(head);
                break;
                
            // delete an element from list
            case 3:
                int key;
                printf("Enter element to be deleted: ");
                scanf("%d", &key);
                // update head if required
                head = deleteNode(head, key);
                break;

            // break out of the loop
            default:
                break;
        }

    } while (choice != 0);

    return 0;
}