/*

This is the brute force approach to shift the elements of the array.

Input 1 2 3 4 5
Shift by 3
Output 3 4 5 1 2


Approach :- Reverse all the elements of the array

Ex : - 1 2 3 4 5

After Reversing :- 5 4 3 2 1

Now , How many rotation we want Ex:- 2

then :- Reverse again the elements from index 2


Ex:- 5 4 1 2 3


*/

#include <iostream>
#include <vector>

using namespace std;

// Reverse the array Elements
void reverse(vector<int> &arr, int left, int right) {
    int n = arr.size();
    while (left < right) {
        int tem = arr[left];
        arr[left] = arr[right];
        arr[right] = tem;
        left++;
        right--;
    }
}

// Shift Element By One Position
int shift(vector<int> &arr, int times) {
    int n = arr.size();
    if (times >=n) return -1; 
    reverse(arr, 0, n - 1);
    reverse(arr, times, n - 1);

    // Print Elements
    for (int i = 0; i < n; i++) cout << arr[i] << " --> ";
}

// Code Start from here 
int main() {
    int n, times;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    cout << " How much times you want shifting. ";
    cin >> times;
    shift(arr, times);
}