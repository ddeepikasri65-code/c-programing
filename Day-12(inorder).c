#include <stdio.h>

#include <stdlib.h>


struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node * createNode(int value) {
    struct Node *newNode = malloc(sizeof(struct Node));

    newNode -> data = value;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}

void inorder(struct Node* root){
    if(root == NULL)
    return;
    
    if(root->left == NULL && root->right ==NULL){
           printf("%d ",root->data);
    }
    
    inorder(root->left);
    inorder(root->right);
}

int main() {

    struct Node *root = createNode(10);

    root -> left = createNode(20);
    root -> right = createNode(30);

    root -> left -> left = createNode(40);
    root -> left -> right = createNode(50);
    
  


printf("\ninorder Traversal:");
inorder(root);

    return 0;
}