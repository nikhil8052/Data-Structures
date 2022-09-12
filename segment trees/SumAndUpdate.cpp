/**
 * @file buildTree.cpp
 * @author Nikhil
 *
 * Problem :- You have given any array of integers and two types of queries.
 * Type 1: return the some between left to right.
 * Type 2:- Index and value update the value val on index idx.
 *   You can get this queries in an order your task is to return the some
 * between left to right.
 *
 * The queries range may be as big as 10^7.
 *
 */

#include <iostream>
#include <vector>

using namespace std;

// Segment tree
void buildSegmentTree(int *arr, vector<int> &tree, int s, int e, int cnode) {
    if (s == e) {
        tree[cnode] = arr[s];
        return ;
    }

    int mid = (s + e) / 2;
    // get the some of left part.
    buildSegmentTree(arr, tree, s, mid, cnode * 2);
    // get the some of the right part.
    buildSegmentTree(arr, tree, mid + 1, e, cnode * 2 + 1);
    tree[cnode] = tree[cnode*2]+tree[cnode*2+1];
}

// Sum Queries
int sum(vector<int> &tree, int s, int e, int l, int r, int idx) {
    // Completely Outside the range
    if (s > r || e < l) return 0;
    // Within the Range
    if (s >= l && e <= r) {
        return tree[idx];
    }
    int mid = (s + e) / 2;
    int a = sum(tree, s, mid, l, r, idx * 2);
    int b = sum(tree, mid + 1, e, l, r, idx * 2 + 1);
    return a + b;
}

void update(int *arr, vector<int> &tree, int s, int e, int tidx, int idx,int val) {
    if (s == e) {
        arr[idx] = val;
        tree[tidx] = val;
        return;
    }

    int mid=(s+e)/2;
    if(idx>mid){
        update(arr,tree,mid+1,e,tidx*2+1,idx,val);
    }else{
        update(arr,tree,s,mid,tidx*2,idx,val);
    }
    tree[tidx]=tree[tidx*2]+tree[tidx*2+1];
}

// Code starts from here
int main() {
    int n;
    cin >> n;
    int *arr = new int[n + 1];
    for (int i = 1; i <= n; i++) cin >> arr[i];

    vector<int> tree(4 * n, 0);
    buildSegmentTree(arr, tree, 1, n, 1);
    update(arr,tree,1,n,1,2,5);
    cout << "\nANSWER :-"<<sum(tree, 1, 8, 2, 3, 1);
    cout<<"Status :- Done.";
}

/**
 *      Intituition :- Go and calculate the sum of my left part.
 *      go and calculate the some of my right part.
 *
 *      Self Work :- I will add the some of left and right half.
 *
 *      Base case :- If the root has no children just return .
 *
 *
 *      Completely outside case :-
 *      LET'S ASSUME
 *
 *      l---------.....--.. something something ....---- r
 *
 *      if start index starts from   l.....r  form here after right then we can
 * say that it's completely outside or not yes .
 *
 *      and again if l.....----r
 *
 *      and end is less than l so it's also the completely outside case.
 *
 *      end is here l.....r
 *
 *      so we must avoid this condition.
 *
 *      if(start>right || end<left) completely outside man.
 *
 *
 */