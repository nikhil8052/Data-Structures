/**
 * @file buildTree.cpp
 * @author Nikhil
 * 
 * Problem :- You have given some queries and array.The queries defines left and right your task is to return 
 * the some between left to right of the array.
 * 
 * sum=arr[left] to till arr[right]
 * return sum;
 * 
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

// Sum Queries 
int sum(vector<int> &tree, int s , int e , int l , int r , int idx   ){
    // Completely Outside the range
    if(s>r || e<l) return 0 ; 
    // Within the Range
    if(s>=l && e<=r){
        return tree[idx];
    }
    int mid=(s+e)/2;
    int a=sum(tree,s,mid,l,r,idx*2);
    int b=sum(tree,mid+1,e,l,r,idx*2+1);
    return a + b ; 
}

// Code starts from here 
int main() {
    int n;
    cin >> n;
    int *arr = new int[n + 1];
    for (int i = 1; i <= n; i++) cin >> arr[i];

    vector<int> tree(4*n,0);
    buildSegmentTree(arr, tree, 1, n, 1);
    cout<<sum(tree,1,8,2,3,1);
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
 *      if start index starts from   l.....r  form here after right then we can say that it's completely outside or not yes .
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