#include <stdio.h>

#include <stdlib.h>


struct Node {
    char * name;
    struct Node * left;
    struct Node * right;
};

struct Node * createNode(char * value) {
    struct Node * newNode = malloc(sizeof(struct Node));

    newNode -> name = value;
    newNode -> left = NULL;
    newNode -> right = NULL;

    return newNode;
}

int main() {

    struct Node * root = createNode("John");

    root -> left = createNode("Alex");
    root -> right = createNode("Ebin");

    root -> left -> left = createNode("Raju");
    root -> left -> right = createNode("David");


    printf("GrandParent: %s\n", root -> name);
    printf("First child: %s\n", root -> left -> name);
    printf("Second grandchild of first child: %s\n", root -> left-> right -> name);

    return 0;
}

GrandParent: John
First child: Alex
Second grandchild of first child: David