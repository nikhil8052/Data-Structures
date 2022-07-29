/*
Insert the Value at the specific position.

For instance,We have Linked List 1-->2-->3-->4

insertAt(position,value,LinkedListPointer)
insertAt(2,8,head)

After running this code the linkedList will look like.
1-->8-->2-->3-->4

*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

// Structure of one Node
struct Node {
    int data;
    struct Node *ptr;
};

// Get one node dynamically
struct Node *getNode(int val) {
    struct Node *tem = (struct Node *)malloc(sizeof(struct Node));
    tem->data = val;
    tem->ptr = NULL;
    return tem;
}

// Head of the Linked List
struct Node *head = NULL;

int insertNode(int val) {
    if (head == NULL) {
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        newNode->data = val;
        newNode->ptr = NULL;
        head = newNode;
        return 1;
    }

    // Save the head pointer to iterate
    struct Node *temHead = head;
    while (temHead->ptr) {
        temHead = temHead->ptr;
    }

    // Logic Understand it.
    temHead->ptr = (struct Node *)malloc(sizeof(struct Node));
    temHead->ptr->data = val;
    temHead->ptr->ptr = NULL;
    return 1;
}

// Insert the Node at the begining
// Here we are using the value by reference
int insertAtBegin(int val, struct Node **head) {
    if (*head == NULL) {
        *head = getNode(val);
        return 1;
    }

    struct Node *tem = getNode(val);
    tem->ptr = *head;
    *head = tem;
    return 1;
}

// Insertion at the particular position
int insertAt(int position, int value, struct Node **head) {
    // Condition for Invalid Index
    if (position <= 0) {
        printf(" Invalid Index.");
        return 0;
    }

    // If position is at the begining
    if (position == 1) {
        insertAtBegin(value, head);
        return 1;
    }

    // Jump to the specific position and insert the node
    struct Node *headCopy = *head;
    for (int i = 1; i < position - 1; i++) {
        if (headCopy->ptr == NULL) break;
        headCopy = headCopy->ptr;
    }

    // printf(" Pointing to the Node before the insertion --> %d
    // ",headCopy->data);

    // Insert the Node at the middle
    struct Node *dynamicNode = getNode(value);
    dynamicNode->ptr = headCopy->ptr;
    headCopy->ptr = dynamicNode;
    return 1;
}

// Traverse the List
void traverseList(struct Node *head) {
    if (head == NULL) {
        printf(" No data available \n ");
    } else {
        while (head) {
            printf(" %d  --> ", head->data);
            head = head->ptr;
        }
    }
}

// Code Starts From here only
int main() {
    insertNode(11);
    insertNode(12);
    insertNode(13);
    insertNode(14);
    insertAt(2, 65, &head);
    traverseList(head);
}