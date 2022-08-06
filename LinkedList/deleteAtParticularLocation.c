/*
Insert Value at the end of the List and Traverse the LinkedList .

LinkedList 1-->2-->3-->4

insertNode(5)

LinkedList 1-->2-->3-->4-->5

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

// delete at the particular location
int deleteAt(int position, struct Node **head) {
    // if the list is empty
    if ((*head) == NULL) {
        printf(" No data is available.");
        return 0 ;
    }

    //    Which means it's the head
    if (position == 1) {
        struct Node *saveCopy=(*head)->ptr ;
        free((*head));
        (*head)=saveCopy;
        return 1;
    }
    // if list contains more than one row 
    struct Node *headCopy=*head ;

    while ((position - 1) > 1) {
        headCopy = headCopy->ptr;
        if (headCopy == NULL) {
            position = -1;
            break;
        }
        position--;
    }
    if (position == -1) return -1;

    struct Node *saveNext = headCopy->ptr->ptr;
    free(headCopy->ptr);
    headCopy->ptr = saveNext;
    return 1 ;
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
    int check=deleteAt(2, &head);
    if(check==0){
        printf(" No Node is available in the Linked List.\n");
    }else if (check==-1){
        printf(" Sorry , index out of bounds.\n");
    }else{
        printf(" Deleted Successfully.\n");
    }

    traverseList(head);
    cout<<"Done";

}