/**
 * @file buildTree.cpp
 * @author Nikhil
 * @brief Segment Tree 
 * @version 0.1
 * @date 2022-09-09
 * 
 * @copyright Copyright (c) 2022
 * 
 * Probem :- You have given the values construt the segement tree which follows the property
 * sub-tree holds the sum of it's childs.
 *  Example :- 
 * 
 *                  1 2 3 (Input Values )
 *                  
 *                  6                   (1+5)
 *              1       5               (2+3) 
 *                    2    3            no children
 */

#include <iostream>
#include <vector>

using namespace std;

// Segment tree 
int buildSegmentTree(int *arr, vector<int> &tree , int s, int e, int cnode) {
    if (s == e) {
        tree[cnode] = arr[s];
        return arr[s];
    }

    int mid = (s + e) / 2;
    // get the some of left part.
    int a =buildSegmentTree(arr, tree, s, mid, cnode*2);
    // get the some of the right part.
    int b =buildSegmentTree(arr, tree, mid + 1, e, cnode * 2 + 1);
    int sum = a+b;
    tree[cnode]=sum;
}

// Code starts from here 
int main() {
    int n;
    cin >> n;
    int *arr = new int[n + 1];
    for (int i = 1; i <= n; i++) cin >> arr[i];

    vector<int> tree(4*n,0);
    buildSegmentTree(arr, tree, 1, n, 1);
    for (int i = 1; i <= 4*n; i++) cout<<tree[i]<<" -> ";
}



/**
 *  Intituition :- Go and calculate the sum of my left part.
 *  go and calculate the some of my right part.
 * 
 *  Self Work :- I will add the some of left and right half. 
 * 
 *  Base case :- If the root has no children just return .
 * 
 * 
 */