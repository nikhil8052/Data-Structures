/*
Delete Node at the begining of list.

LinkedList 1-->2-->3-->4

deleteAtBegin(head)

LinkedList 2-->3-->4-->5

*/

#include <conio.h>
#include <stdio.h>
#include <stdlib.h>

// Structure of one Node
struct Node {
    int data;
    struct Node *ptr;
};

// Head of the Linked List
struct Node *head = NULL;

// Insert function to insert value at the end
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

int deleteAtBegin(struct Node **head) {
    //    No Node available in the LinkedList
    if (*head == NULL) {
        printf(
            " No data available please use insertNode(int value) to add the "
            "data.");
    }

    // If means only one Node exists delete that and store NULL in head
    if ((*head)->ptr == NULL) {
        free(*head);
        *head = NULL;
        printf(" Now head is NULL \n ");
    }

    struct Node *headCopy = *head;
    *head = (*head)->ptr;
    free(headCopy);
}

// Traverse the List
void traverseList(struct Node *head) {
    if (head == NULL) {
        printf(" No data available \n ");
    } else {
        while (head) {
            printf("-->(%d)", head->data);
            head = head->ptr;
        }
    }
}

// Code Starts From here only
int main() {
    insertNode(1);
    insertNode(2);
    deleteAtBegin(&head);
    insertNode(3);
    insertNode(4);
    traverseList(head);
    cout<<"Done";
}