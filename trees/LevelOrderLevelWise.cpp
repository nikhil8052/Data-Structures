
/*
  Level Order Level Wise means that Print Every Level in new Line. We are assuming in this question.

1 2 4 -1 -1 5 -1 -1 3 -1 -1

  Tree :- 

       1 
     2    3 
   4   5  6 


Level Order Level Wise Output 

 1 
 2 3 
 4 5 6 

*/
#include <iostream>
#include <queue>

using namespace std;

struct Node {
    int data;
    Node *left, *right;
    Node(int val) { data = val; }
};


// Pass the root of your tree to this function 
void level_order(Node *root) {
    if (root == NULL) return;

    queue<Node *> qu;
    qu.push(root);
    qu.push(NULL);

    while (!qu.empty()) {
        Node *cur = qu.front();
        if(cur==NULL){
            if(qu.size()==1) break ; 
            qu.push(NULL);
            qu.pop();
            cout<<endl;
            continue;
        }
        qu.pop();
        cout << cur->data << " ";
        if (cur->left) qu.push(cur->left);
        if (cur->right) qu.push(cur->right);
    }
}


// Basic function to build tree 
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