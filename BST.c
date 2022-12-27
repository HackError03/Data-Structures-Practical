#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

// Function to create a new node
struct Node* createNode(int data)
{
    struct Node *newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
}

// Function to insert a new node into the tree
struct Node* insertNode(struct Node *root, int data)
{
    // Tree is empty, create a new node
    if (root == NULL) return createNode(data);

    // Data is less than root, insert into left subtree
    if (data < root->data)
        root->left = insertNode(root->left, data);
    // Data is greater than or equal to root, insert into right subtree
    else
        root->right = insertNode(root->right, data);

    return root;
}

// Function to traverse the tree in inorder
void inorder(struct Node *root)
{
    if (root == NULL) return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

// Function to traverse the tree in preorder
void preorder(struct Node *root)
{
    if (root == NULL) return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

// Function to traverse the tree in postorder
void postorder(struct Node *root)
{
    if (root == NULL) return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    struct Node *root = NULL;  // Initialize root of the tree

    root = insertNode(root, 50);  // Insert node with value 50
    root = insertNode(root, 30);  // Insert node with value 30
    root = insertNode(root, 20);  // Insert node with value 20
    root = insertNode(root, 40);  // Insert node with value 40
    root = insertNode(root, 70);  // Insert node with value 70
    root = insertNode(root, 60);  // Insert node with value 60
    root = insertNode(root, 80);  // Insert node with value 80

    printf("Inorder traversal: ");
    inorder(root);
    printf("\n");

    printf("Preorder traversal: ");
    preorder(root);
    printf("\n");

    printf("Postorder traversal: ");
    postorder(root);
    printf("\n");

    return 0;
}
