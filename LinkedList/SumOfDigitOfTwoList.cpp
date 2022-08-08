
/*

 List-1    2 -> 4 -> 3 -> 
 List-2    5 -> 6 -> 4 ->

Answer List     7 -> 0 -> 8 ->  
*/
#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *ptr;
    Node(int val) {
        data = val;
        ptr = NULL;
    }
};

void insert(Node **head, int val) {
    if (*head == NULL) {
        *head = new Node(val);
        return;
    }

    Node *cur = *head;
    while (cur->ptr) cur = cur->ptr;

    cur->ptr = new Node(val);
}

void traverse(Node *head) {
    if (head == NULL) return;

    while (head) {
        cout << head->data << " -> ";
        head = head->ptr;
    }

    cout << endl;
}

Node *sum(Node *list1, Node *list2) {
    Node *ans = new Node(0);
    Node *cur = ans ; 
    int carry = 0;

    while (list1 != NULL || list2 != NULL || carry != 0) {
        int x = list1 ? list1->data : 0;
        int y = list2 ? list2->data : 0;

        int sum = x+y+carry ;
         carry = sum/10 ; 
        int r = sum%10; 
        cur->ptr = new Node ( r );
        cur=cur->ptr ; 

        list1=list1 ? list1->ptr : NULL ;
        list2=list2 ? list2->ptr : NULL ;
         
    }
    return ans->ptr ;
}

int main() {
    Node *head1 = NULL;
    Node *head2 = NULL;
    insert(&head1, 2);
    insert(&head1, 4);
    insert(&head1, 3);
    insert(&head2, 5);
    insert(&head2, 6);
    insert(&head2, 4);
    traverse(head1);
    traverse(head2);
    traverse(sum(head1,head2));
}