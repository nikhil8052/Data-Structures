#include <iostream>
#include <vector>

#define vi vector<int>
#define loop(n) for (int i = 0; i < n; i++)
#define print(arr) \
    loop(arr.size()) { cout << arr[i] << " "; }
#define in(arr, n) \
    loop(n) { cin >> arr[i]; }
#define ll long long int

using namespace std;

struct Node {
    int data;
    Node *ptr;
    Node(int value) {
        data = value;
        ptr = NULL;
    }
};

Node *head = NULL;

// Slow and fast pointers help 
int findMid(Node *head) {
    if (head == NULL) return -1;
    Node *slow = head;
    Node *fast = head;
    while (fast!=NULL && fast->ptr!= NULL) {
        slow = slow->ptr;
        if(fast->ptr==NULL) break ; 
        fast = fast->ptr->ptr;
    }
    int val = slow->data;
    cout << endl << " This is slow data " << slow->data;
    return val;
}


void insert(Node **head, int value) {
    if (*head == NULL) {
        *head = new Node(value);
        return;
    }

    Node *tem = *head;
    while (tem->ptr) tem = tem->ptr;
    tem->ptr = new Node(value);
    return;
}

void traverse(Node *head) {
    if (head == NULL) return;
    cout << head->data << "--> ";
    traverse(head->ptr);
}

int main() {
    insert(&head, 1);
    insert(&head, 2);
    insert(&head, 3);
    insert(&head, 4);
    insert(&head, 5);
    traverse(head);
    cout << endl << findMid(head);
    cout<<"Done";
}