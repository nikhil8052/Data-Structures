#include <iostream>
#include <vector>

using namespace std;

// Shift Element By One Position
void shift(vector<int> &arr) {
    int n = arr.size();
    // Point to the last element
    int pre = arr[n - 1];
    for (int i = 0; i < n; i++) {
        int cur = arr[i];
        arr[i] = pre;
        pre = cur;
    }

    // Print Elements
    for (int i = 0; i < n; i++) cout << arr[i] << " --> ";
}
int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    // Call function to shift element 
    shift(arr);
}