/*
   Print the right view of the tree 

   Example :- 

       1 
    2      3 
  4        


  If we see this tree from the right then we can only be see the 1 3 and 4
  because the 2 is being hidden by the 3;

  Answer  is --->   1 3 4 
*/

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

// Please complete this function
int maximum = -1;
void rightView(Node *root , int cur ) {
    if (root == NULL) return;
    if (cur > maximum) {
        cout << root->data;
        maximum=cur ;
    }
    rightView(root->right,cur+1);
    rightView(root->left,cur+1);
}

// Code starts from here
int main() {
    Node *root = build();
    rightView(root,0);
    cout << "Done ";
}