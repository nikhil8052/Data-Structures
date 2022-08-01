/*

This is the brute force approach to shift the elements of the array. 

Input 1 2 3 4 5 
Shift by 3 
Output 3 4 5 1 2 

*/

#include <iostream>
#include <vector>

using namespace std;

// Shift Element By One Position
void shift(vector<int> &arr, int times ) {
    int n = arr.size();
    // Point to the last element
    int k = 0;
    while (k < times) {
        int pre = arr[n - 1];
        for (int i = 0; i < n; i++) {
            int cur = arr[i];
            arr[i] = pre;
            pre = cur;
        }
        k++;
    }

    // Print Elements
    for (int i = 0; i < n; i++) cout << arr[i] << " --> ";
}
int main() {
    int n,times;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout<<" How much times you want shifting. ";
    cin>>times;
    // Call function to shift element
    shift(arr,times);
}