/*
  Written By : Nikhil
  Date : 6 August 2022
  Brief:- Merge two sorted arrays.

*/

#include <iostream>
#include <vector>

using namespace std;

/* Merge two alread sorted arrays */
vector<int> merge(vector<int> arr1, vector<int> arr2) {
    int totalSize = arr1.size() + arr2.size();
    vector<int> arr(totalSize);
    int size1 = arr1.size();
    int size2 = arr2.size();
    int left1 = 0;
    int left2 = 0;
    int k = 0;

    while (left1 < size1 && left2 < size2) {
        if (arr1[left1] > arr2[left2]) {
            arr[k] = arr2[left2];
            left2++;
            k++;

        } else {
            arr[k] = arr1[left1];
            k++;
            left1++;
        }
    }

    while (left1 < size1) {
        arr[k] = arr1[left1];
        k++;
        left1++;
    }

    while (left2 < size2) {
        arr[k] = arr2[left2];
        k++;
        left2++;
    }

    return arr;
}

/* Take input  */
void takeArrayInput(vector<int> &arr, int n) {
    for (int i = 0; i < n; i++) {
        int ele;
        cin >> ele;
        arr.push_back(ele);
    }
}

/* Print the vector */
void printArr(vector<int> arr) {
    if (arr.size() == 0) {
        cout << " No Elements are available . ";
        return;
    }

    int size = arr.size();
    for (int i = 0; i < size; i++) cout << arr[i] << " ";
}

/* Code starts from here */
int main() {
    vector<int> arr1, arr2, arr;
    int size;

    /*  Note Input Must be sorted arrayas */
    cout << " Enter the size of first array. ";
    cin >> size;
    takeArrayInput(arr1, size);

    cout << " Enter the size of second array. ";
    cin >> size;
    takeArrayInput(arr2, size);

    printArr(merge(arr1, arr2));
}