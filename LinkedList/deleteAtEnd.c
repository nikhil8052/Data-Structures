/*
Let's try something different.
Here, I have assumed the list of string.


    insertAtEnd("nikhil");
    insertAtEnd("Vijay");
    insertAtEnd("Raj");
    insertAtEnd("moksh");
    insertAtEnd("rishu");
    insertAtEnd("hate");
    deleteAtEnd(&head);
    traverse(head);

    nikhil-->Vijay-->Raj-->moksh-->rishu-->hate

    let's remove hate from this this Linked List

    nikhil-->Vijay-->Raj-->moksh-->rishu-->


*/

#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

// One Node Structure
struct Node
{
    char name[100];
    struct Node *ptr;
};

// Head of the Linked List
struct Node *head = NULL;

// Get one Node dynamically
struct Node *getNode(char name[])
{

    struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
    int i = 0;
    while (name[i])
    {
        newNode->name[i] = name[i];
        i++;
    }
    newNode->ptr = NULL;
}

int insertAtEnd(char name[])
{
    // That means first node need to be inserted
    if (head == NULL)
    {
        head = getNode(name);
        return 1;
    }

    struct Node *headCopy = head;
    while (headCopy->ptr)
    {
        headCopy = headCopy->ptr;
    }
    headCopy->ptr = getNode(name);
    return 1;
}

// delete Node at the end of the list
int deleteAtEnd(struct Node **head)
{

    // No Node is available
    if (*head == NULL)
    {
        printf(" No data is available.");
        return 0;
    }

    // Only one node is available
    if ((*head)->ptr == NULL)
    {
        free((*head));
        (*head) = NULL;
        return 1;
    }

    // Save the head Pointer
    struct Node *headCopy = *head;

    while (headCopy->ptr->ptr)
    {
        headCopy = headCopy->ptr;
    }

    free(headCopy->ptr);
    headCopy->ptr = NULL;
    return 1;
}

// traverse the list
void traverse(struct Node *head)
{

    if (head == NULL)
    {
        printf(" No data is available.");
        return;
    }

    while (head)
    {
        printf("%s-->", head->name);
        head = head->ptr;
    }
}


// Code starts from here
int main()
{

    insertAtEnd("nikhil");
    insertAtEnd("Vijay");
    insertAtEnd("Raj");
    insertAtEnd("moksh");
    insertAtEnd("rishu");
    insertAtEnd("hate");
    deleteAtEnd(&head);
    traverse(head);
}