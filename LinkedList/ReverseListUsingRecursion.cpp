/*
  Written By :- Nikhil 
  Date :- 06 August 2022 
  Brief :- Reverse Linked List using recursion. 

  Tip :- Please do iterate code by pen and paper.
*/

#include <stdlib.h>
#include <iostream>

using namespace std;

struct Node {
    int data;
    struct Node *ptr;
};



/* Reverse the list using recursion*/
void reverseUsingRecursion(struct Node *root, struct Node *pre) {
    if (root == NULL) {
        head = pre;
        return;
    }

    reverseUsingRecursion(root->ptr, root);
    root->ptr = pre;
}


/* Head to access list. */
struct Node *head = NULL;

struct Node *getNode(int data) {
    struct Node *tem = (struct Node *)malloc(sizeof(struct Node));
    tem->ptr = NULL;
    tem->data = data;
    return tem;
}

/*Insert at the end of the list */
void insert(struct Node **head, int data) {
    //   Means the list is empty
    if (*head == NULL) {
        *head = getNode(data);
        return;
    }

    struct Node *copy = *head;

    while (copy->ptr) copy = copy->ptr;

    copy->ptr = getNode(data);
}

// Traverse all the list
void traverse(struct Node *head) {
    if (head == NULL) {
        cout << " No data is available .";
        return;
    }

    while (head) {
        cout << head->data << " -> ";
        head = head->ptr;
    }
    cout << endl;
}




int main() {
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    traverse(head);
    cout << endl;
    reverseUsingRecursion(head,NULL);
    traverse(head);
    cout << " Done ";
}