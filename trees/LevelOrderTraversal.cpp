/*

 Written By :- Nikhil 
 Date :- 07 August 2022 
 Brief :- Level order of tree. 
 


INPUT :- 
1 2 -1 -1 3 -1 -1

OUTPUT :- 
1 2 3

Tree :- 

     1 
   2   3 


*/



#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) { data = val; }
};

void level_order(Node *root) {
    if (root == NULL) return;

    queue<Node *> qu;
    qu.push(root);

    while (!qu.empty()) {
        Node *cur = qu.front();
        qu.pop();
        cout << cur->data << " ";
        if (cur->left) qu.push(cur->left);
        if (cur->right) qu.push(cur->right);
    }
}

Node *build() {
    int ele;
    cin >> ele;

    if (ele == -1) return NULL;

    Node *node = new Node(ele);
    node->left = build();
    node->right = build();

    return node;
}
int main() {
    Node *root = build();
    level_order(root);
}