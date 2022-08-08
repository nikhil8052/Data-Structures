
/*

   Written By : - Nikhil
   Date :- 07 August 2022
   Brief :- Find unique element where every element occurs twice .


   Problem :- Find the two unique numbers from the array where every element repleat twice
   except the two unique numbers.

*/

#include <iostream>
#include <vector>

using namespace std;

// Check the list significant bit and return the number 
int checkLeastSetBit(int num) {
    cout << " Number in the check least bit " << num << endl;
    int i = 1;
    while (num) {
        if ((num & i) == i) break;
        i = i << 1;
    }
    return i;
}

/*Find two Unique numbers from the array.*/
int findUniques(vector<int> &arr) {
    int both = 0;
    for (int i = 0; i < arr.size(); i++) both = both ^ arr[i];
    vector<int> left, right;

    // find least set bit
    int num = checkLeastSetBit(both);
    cout << " This is num " << num << endl;
    for (int i = 0; i < arr.size(); i++) {
        if ((arr[i] & num) == num)
            left.push_back(arr[i]);
        else
            right.push_back(arr[i]);
    }

    int firstNum, secondNum;
    firstNum = secondNum = 0;
    for (int i = 0; i < left.size(); i++) {
        firstNum = firstNum ^ left[i];
    }

    for (int i = 0; i < right.size(); i++) {
        secondNum = secondNum ^ right[i];
    }
    cout << "First Unique Number :- " << firstNum;
    cout << endl;
    cout << "Second Unique Number :- " << secondNum;
}

// Code starts from here 
int main() {
    int n, times;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    findUniques(arr);
    cout<<"Done";
}