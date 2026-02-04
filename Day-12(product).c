#include <stdio.h>
#include<stdlib.h>

struct node{
    char *data;
    struct node *left;
    struct node *right;
};

struct node *createnode(char *value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Allocataion failed");
        return NULL;    }
    newnode->data = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int main() {
    struct node* root = createnode("product");
    root->left = createnode("Electronics");
    root->right = createnode("Clothing");
    root->left->left = createnode("Mobile");
    root->left->right = createnode("Laptop");
    root->right->left = createnode("Cotten");
    root->right->right = createnode("Fabric");
    
    printf("Main category : %s\n",root->data);
    printf("Electronics Sub-category : %s\n",root->left->left->data);
     printf("Electronics Sub-category : %s",root->left->right->data);
    return 0;
}