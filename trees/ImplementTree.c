
/*

    Written By : Nikhil 
    Date :- 07 August 2022 
    Brief :- Implementation of tree. 


    It might seem you a bit complicated implementation.Because, I used refrences(Pointers) in this.
    Easy one might be available on Google. 

    Tip:- Please keep pen and paper and try to dry run the code. 


*/

#include <stdlib.h>
#include <stdio.h >

struct Node {
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node *root = NULL;

struct Node *getNode(int data) {
    struct Node *tem = (struct Node *)malloc(sizeof(struct Node));
    tem->data = data;
    tem->left = tem->right = NULL;
    return tem;
}

int getInput() {
    int ele;
    printf(" Enter the Value ");
    scanf(" %d", &ele);
    return ele;
}

// Construct the Tree 
void constructTree(struct Node **root) {
    if (*root == NULL) {
        *root = getNode(getInput());
    }

    char ch;
    printf(" Now , Root value is %d \n ", (*root)->data);
    printf(" Do you want to enter left child of %d \n Y/N ", (*root)->data);
    scanf(" %c", &ch);

    if (ch == 'y' || ch == 'Y') {
        (*root)->left = getNode(getInput());
        constructTree(&(*root)->left);
    }

    printf(" Now , Root value is %d \n ", (*root)->data);
    printf(" Do you want to enter Right  child of %d \n Y/N ", (*root)->data);
    scanf(" %c", &ch);

    if (ch == 'y' || ch == 'Y') {
        (*root)->right = getNode(getInput());
        constructTree(&(*root)->right);
    }
}

// Pre-Order traversal 
void preOrder(struct Node *root) {
    if (root == NULL) {
        return;
    }

    printf(" %d -> ", root->data);
    preOrder(root->left);
    preOrder(root->right);
}

int main() {
    constructTree(&root);
    preOrder(root);
}