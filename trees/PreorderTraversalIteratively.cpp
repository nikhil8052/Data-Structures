/*
   Written By :- Nikhil 
   Date:- 07 August 2022 
   Brief:- Preorder Iteratively

*/

#include <iostream>
#include <stack>

using namespace std;

// Node structure
struct Node {
    int data;
    Node *left, *right;
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

/* Preorder Iteratively */
void preorder_iteratively(Node *root) {
    if (root == NULL) return;
    stack<Node *> stack;

    stack.push(root);
    while (!stack.empty()) {
        Node *cur = stack.top();
        stack.pop();

        cout << cur->data << " ";
        if (cur->left) {
            stack.push(cur->right);
            stack.push(cur->left);
        }
    }
}


// Preorder Recursively 
void preOrder( Node *root) {
    if (root == NULL) {
        return;
    }

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}



// Build the tree
Node *build() {
    int ele;
    cin >> ele;
    if (ele == -1) return NULL;

    Node *node = new Node(ele);
    node->left = build();
    node->right = build();
    return node;
}


// Code starts from here
int main() {
    Node *root = build();
    preOrder(root);
    cout << endl;
    preorder_iteratively(root);
}