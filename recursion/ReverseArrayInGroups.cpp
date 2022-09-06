#include <iostream>
#include <vector>

using namespace std;

// Reverse Array Left and Right
void reverseArr(vector<long long>& arr, int l, int r) {
    while (l < r) {
        long long tem = arr[l];
        arr[l] = arr[r];
        arr[r] = tem;
        l++;
        r--;
    }
}

// Reverse recursively
void reverse(vector<long long>& arr, int l, int r, int n, int k) {
    if (n == 1 || n == 0) return;

    if (r > n - 1) {
        reverseArr(arr, l, n - 1);
        return;
    }
    reverseArr(arr, l, r);
    reverse(arr, r + 1, r + k, n, k);
    return;
}

// Function to reverse every sub-array group of size k.
void reverseInGroups(vector<long long>& arr, int n, int k) {
    reverse(arr, 0, k - 1, n, k);
}

int main() {
    int n, k;
    cin >> n >> k;
    vector<long long> arr(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    reverseInGroups(arr, n, k);
    for (int i = 0; i < n; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<" Status : Done";
}