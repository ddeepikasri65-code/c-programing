// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

struct node{
    char *position;
    struct node *left;
    struct node *right;
};

struct node *createnode(char *value){
    struct node* newnode = (struct node*)malloc(sizeof(struct node));
    if(newnode == NULL){
        printf("Allocataion failed");
        return NULL;
    }
    newnode->position = value;
    newnode->left = NULL;
    newnode->right = NULL;
    return newnode;
}

int main() {
    struct node* root = createnode("CEO");
    root->left = createnode("Manager 1");
    root->right = createnode("Manager 2");
    root->left->left = createnode("Team lead 1");
    root->left->right = createnode("Team lead 2");
    
    
    printf("CEO: %s\n",root->position);
    printf("Right Team lead under Manager1: %s",root->left->right->position);
    
    return 0;
}

