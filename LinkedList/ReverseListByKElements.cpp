/*
   Written By :- Nikhil
   Date :- 07 August 2022
   Brief :- Reverse Linked List by K Elements.

*/

#include <stdlib.h>

#include <iostream>

using namespace std;

/* Structure of the one Node */
struct Node {
    int data;
    struct Node *ptr;
};

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


// Reverse K Nodes of the Linked List 
struct Node *reverseListBy(struct Node **root, int k) {
    if ((*root) == NULL) return NULL;

    struct Node *pre = NULL, *cur = NULL, *rootCopy = *root;

    int i = 0;
    while (rootCopy && i < k) {
        cur = rootCopy->ptr;
        rootCopy->ptr = pre;
        pre = rootCopy;
        rootCopy = cur;
        i++;
    }

    (*root)->ptr = reverseListBy(&cur, k);
    return pre;

}

int main() {
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    traverse(head);
    struct Node *tem = reverseListBy(&head, 2);
    traverse(tem);
    cout << " Done ";
}