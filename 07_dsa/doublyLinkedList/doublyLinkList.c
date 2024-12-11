#include <stdio.h>
#include <stdlib.h>

// structure of node
struct Node {
    int data;
    // for previous node
    struct Node *prev;
    // for next node
    struct Node *next;
};


// function to print the linked list
void printList(struct Node*head) {
    struct Node *temp = head;
    while (temp != NULL) {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}


// function to add new node to list
struct Node* addToList() {
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    printf("Enter data: ");
    scanf("%d", &newNode->data);
    newNode->prev = NULL;
    newNode->next = NULL;
    return newNode;
} 


// delete a node from list
struct Node* deleteNode(struct Node*head, int key) {
    struct Node *temp = head, *temp2 = NULL;

    // if node is head
    if(temp != NULL && temp->data == key) {
        // update head and it's prev and next
        temp2 = temp->next;
        temp2->prev = NULL;
        head = temp2;
        free(temp);
        return head;
    }

    // find the element in the list
    while (temp != NULL && temp->data != key) {
        temp = temp -> next;
    }

    // if element not found
    if(temp == NULL) {
        printf("Element not found\n");
        return head;
    }
    
    // remove element 
    // update next and prev for that element
    if(temp -> next != NULL) {
        temp -> next -> prev = temp -> prev;
    }
    if(temp -> prev != NULL) {
        temp -> prev -> next = temp -> next;
    }
    
    // free the memory
    free(temp);
    return head;
}

// print list in reverse order
void printInReverser(struct Node *head) {
    struct Node *temp = head, *tail = head;
    while (temp->next != NULL) {
        temp = temp -> next;
    }
    tail = temp;
    while (tail != NULL) {
        printf("%d, ", tail->data);
        tail = tail -> prev;
    }
    printf("\n");
}

// reverse the list
struct Node* reverseList(struct Node *head) {
    struct Node *temp = head, *swapHelper = NULL;
    while (temp -> next != NULL) {
        swapHelper = temp -> next;
        temp -> next = temp -> prev;
        temp -> prev = swapHelper;
        temp = swapHelper;
    }

    temp -> next = temp -> prev;
    temp -> prev = NULL;
    head = temp;
    return head;
}

int main () {
    // pointer variables
    struct Node *head=NULL, *temp=NULL, *newNode=NULL, *prev = NULL;
    int choice;

    printf("1. Insert At End\n");
    printf("2. Insert At Start\n");
    printf("3. Print List\n");
    printf("4. Delete An Element\n");
    printf("5. Reverse the list\n");
    printf("6. Print in reverse\n");
    printf("Press 0 for exit\n");

    do {
        
        printf("Enter choice: ");
        scanf("%d", &choice);

        // swtich case for all the operations
        switch (choice)
        {   
            // appending new elements at the end of the list
            case 1:
                newNode = addToList();
                // for the first element in the list
                if( head == NULL) {
                    head = temp = prev = newNode;
                } else {
                    newNode -> prev = prev;
                    temp -> next = newNode;
                    prev = newNode;
                    temp = newNode;
                }
                break;
            
            // for adding new element at the beginning of the list
            case 2:
                newNode = addToList();
                // udpate head
                head -> prev = newNode;
                newNode -> next = head;
                if(temp == head) {
                    temp = newNode;
                }
                head = newNode;
                break;
            
            // print the list
            case 3:
                printList(head);
                break;
                
            // delete an element from list
            case 4:
                int key;
                printf("Enter element to be deleted: ");
                scanf("%d", &key);
                // update head if required
                head = deleteNode(head, key);
                break;

            // reverse the list
            case 5:
                head = reverseList(head);
                break;

            // print list in reverse order
            case 6:
                printInReverser(head);
                break;

            // break out of the loop
            default:
                break;
        }

    } while (choice != 0);

    printList(head);
    return 0;
}