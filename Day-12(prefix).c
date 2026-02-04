#include <stdio.h>

#include <stdlib.h>


struct Node {
    char data;
    struct Node *left;
    struct Node *right;
};

struct Node * createNode(char *value) {
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode -> data = *value;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}
void preorder(struct Node* root){
    if(root == NULL)
    return;
    
    printf("%c ",root->data);
    preorder(root->left);
    preorder(root->right);
}

int main() {

    struct Node *root = createNode("*");

    root -> left = createNode("+");
    root -> right = createNode("C");

    root -> left -> left = createNode("A");
    root -> left -> right = createNode("B");


printf("Preorder Traversal:");
preorder(root);

    return 0;
}