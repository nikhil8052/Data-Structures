#include <iostream>

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
 }