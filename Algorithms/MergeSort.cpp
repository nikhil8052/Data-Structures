#include <iostream>
#include <vector>

using namespace std;

// Merge two sorted arrays 
void merge(int arr[], int left, int right, int mid) {
    int size1 = (mid - left) + 1;
    int size2 = right - mid;
    int arr1[100];
    int arr2[100];

    int k = 0;
    for (int i = left; i <= mid; i++) {
        arr1[k] = arr[i];
        k++;
    }
    k = 0;
    for (int i = mid + 1; i <= right; i++) {
        arr2[k] = arr[i];
        k++;
    }

    k = left;
    int i = 0, j = 0;
    while (i < size1 && j < size2) {
        if (arr1[i] > arr2[j]) {
            arr[k] = arr2[j];
            k++;
            j++;
        } else {
            arr[k] = arr1[i];
            k++;
            i++;
        }
    }

    while (i < size1) {
        arr[k] = arr1[i];
        i++, k++;
    }

    while (j < size2) {
        arr[k] = arr2[j];
        j++, k++;
    }
}

// Merge Sort 
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, right, mid);
    }
}

// Code Starts from here 
int main() {
    int n;
    cout << " Enter the number of elements to be entered .";
    cin >> n;

    int arr[100];

    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) cout << arr[i] << " ";

    cout << endl;
    mergeSort(arr, 0, n - 1);
    for (int i = 0; i < n; i++) cout << arr[i] << "-> ";
}