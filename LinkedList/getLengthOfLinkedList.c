/*
Insert Value at the end of the List and Traverse the LinkedList .
*/

#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


// Structure of one Node 
struct Node{
   int data ;
   struct Node *ptr;
};


// Head of the Linked List 
struct Node *head= NULL  ;

int insertNode(int val){

    if(head==NULL){
       struct Node *newNode=(struct Node*) malloc(sizeof(struct Node ));
       newNode->data=val;
       newNode->ptr=NULL;
       head=newNode;
      return 1 ;
    }

    // Save the head pointer to iterate 
    struct Node *temHead=head ;
    while(temHead->ptr){
        temHead=temHead->ptr;
    }

    // Logic Understand it.
    temHead->ptr = (struct Node *) malloc(sizeof(struct Node)); 
    temHead->ptr->data=val;
    temHead->ptr->ptr=NULL;
    return 1 ;

}


// Calculate the length of LinkedList 
int len(struct Node *head){
    int len=0;
    while(head){
        len++;
        head=head->ptr;
    }
    return len ;
}

// Traverse the List 
void traverseList(struct Node *head ){

     if(head==NULL){
        printf(" No data available \n ");
     }else{
        while(head){
            printf(" %d  --> ",head->data);
            head=head->ptr;
        }
     }
}


// Code Starts From here only 
int main(){

    insertNode(11);
    insertNode(12);
    insertNode(13);
    insertNode(14);
    traverseList(head);
    printf("Length is %d .",len(head));

}