#include <stdio.h>
#include <stdlib.h>

// node structure for storing data and address of next node
struct Node{
    int data;
    struct Node *next;
};


// function to traverse / print the linked list
void printList( struct Node *head) {
    struct Node * temp = head;
    while (temp != NULL) {
        printf("%d, ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

// function add a new node and return newNode's address
struct Node* appendItem() {
    // create new node
    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    // enter data in node
    printf("Enter data for node: ");
    scanf("%d", &newNode->data);
    // return newNode's address
    return newNode;
}


int main() {
    // pointer variables for head, temp and newNode
    struct Node *head = NULL, *temp, *newNode;
    char ch;

    // append value until user want to
    do{
        // address of newly added node
        newNode = appendItem(); 

        // if head is null set head
        if(head == NULL) {
            head = temp = newNode;
        } else {
            // else, add the address of new node in prev's newNode's next
            temp -> next = newNode;
            temp = newNode;
        }

        // ask for more input
        printf("add more (y/n): ");
        while(getchar() != '\n' );
        scanf("%c", &ch);
    } while( ch == 'y' || ch == 'Y');

    // print the link list
    printList(head);

    return 0;
}