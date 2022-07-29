/*
Insert Value at the begining of the List and Traverse the LinkedList .

LinkedList 1-->2-->3-->4

insertFirst(10)

LinkedList 10-->1-->2-->3-->4

*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

// Node structure
struct Node {
    int data;
    struct Node *ptr;
};

// Create the head pointer
struct Node *head = NULL;

// Get the New Node
struct Node *getNode(int val) {
    struct Node *tem = (struct Node *)malloc(sizeof(struct Node));
    tem->data = val;
    tem->ptr = NULL;
}

// Insert the at the end
int insertEnd(int val) {
    if (head == NULL) {
        struct Node *newNode = getNode(val);
        head = newNode;
        return 1;
    }

    struct Node *temHead = head;
    while (temHead->ptr) {
        temHead = temHead->ptr;
    }
    temHead->ptr = getNode(val);
    return 1;
}

// Insert at beginning
int insertFirst(int val) {
    struct Node *tem = getNode(val);
    tem->ptr = head;
    head = tem;
}

// Traverse the list
void traverseList(struct Node *head) {
    if (head == NULL) {
        printf(" No data to display.");
        return;
    }

    while (head) {
        printf(" %d -- > ", head->data);
        head = head->ptr;
    }
}

// Code starts from here
int main() {
    insertEnd(12);
    insertEnd(13);
    insertEnd(14);
    traverseList(head);
    insertFirst(11);
    insertFirst(10);
    printf("\n\n");
    traverseList(head);
}