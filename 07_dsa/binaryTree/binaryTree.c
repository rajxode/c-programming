#include <stdio.h>
#include <stdlib.h>

// node of tree
// data and left,right pointer
typedef struct Node {
    int data;
    struct Node *left;
    struct Node *right;
} Node;

// create tree
Node* create() {
    Node *newNode = (Node*)malloc(sizeof(Node));
    int x;
    printf("enter data (-1 for empty): ");
    scanf("%d",&x);
    if(x == -1) {
        return NULL;
    }
    newNode -> data = x;
    // data for left subtree
    printf("for Left child of %d ", x);
    newNode -> left = create();
    // data for right subtree
    printf("for right child of %d ", x);
    newNode -> right = create();
    return newNode;
}

// inorder traversal
// left subtree - root - right subtree
void inOrderTraversal(Node *root) {
    if(root == NULL) {
        return;
    }
    // left
    if (root -> left != NULL) {
        inOrderTraversal(root -> left);
    }
    // root
    printf("%d ", root->data);
    // right
    if(root -> right != NULL) {
        inOrderTraversal(root -> right);
    }
    return;
}

// preorder
// root - left subtree - right subtree
void preOrder(Node *root) {
    if(root == NULL) {
        return;
    }
    // root
    printf("%d ",root->data);
    // left
    if(root -> left != NULL) {
        preOrder(root->left);
    }
    // right
    if(root->right != NULL) {
        preOrder(root->right);
    }
    return;
}

// postorder
// left subtree - right subtree - root
void postOrder(Node *root) {
    if(root == NULL) {
        return;
    }
    // left
    if(root -> left != NULL) {
        postOrder(root->left);
    }
    // right
    if(root->right != NULL) {
        postOrder(root->right);
    }
    // root
    printf("%d ",root->data);
    return;
}

// level order traversal
// same level print
void levelOrder(Node *root) {
    if (root == NULL) {
        return;
    }
    Node *queue[10];
    int front=0,rear=0;
    // enqueue, add node to queue
    queue[rear++] = root;
    while(front < rear) {
        // dequeue root
        Node *temp = queue[front++];
        printf("%d ",temp->data);
        // enqueue left child
        if(temp -> left != NULL) {
            queue[rear++] = temp->left;
        }
        // enqueue right child
        if(temp -> right != NULL) {
            queue[rear++] = temp->right;
        }
    }
}


int main() {
    Node *root = NULL;
    root = create();
    printf("InOrder: ");
    inOrderTraversal(root);
    printf("\npreOrder: ");
    preOrder(root);
    printf("\npostOrder: ");
    postOrder(root);
    printf("\nLevelOrder: ");
    levelOrder(root);
    return 0;
}