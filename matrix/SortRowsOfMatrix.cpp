#include <iostream>
#include <vector>

using namespace std;

// Merge two sorted arrays
void merge(vector<int> &arr, int left, int right, int mid) {
    int s1 = mid - left + 1;
    int s2 = right - mid;
    int k = 0;

    int arr1[100], arr2[100];

    for (int i = left; i <= mid; i++) {
        arr1[k] = arr[i];
        k++;
    }

    k = 0;

    for (int i = mid + 1; i <= right; i++) {
        arr2[k] = arr[i];
        k++;
    }

    int i = 0, j = 0;
    k = left;
    while (i < s1 && j < s2) {
        if (arr1[i] > arr2[j]) {
            arr[k] = arr2[j];
            j++;
            k++;
        } else {
            arr[k] = arr1[i];
            i++;
            k++;
        }
    }

    while (i < s1) {
        arr[k] = arr1[i];
        i++, k++;
    }

    while (j < s2) {
        arr[k] = arr2[j];
        k++, j++;
    }
}

// Merge Sort Funtion
void mergeSort(vector<int> &arr, int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, right, mid);
    }
}

// Sort Rows of a matrix
int sortRows(vector<vector<int>> &matrix) {
    int size = matrix.size();

    // jump to every row and apply merge sort
    for (int i = 0; i < size; i++) {
        int colSize = matrix[i].size();
        mergeSort(matrix[i], 0, colSize - 1);
    }
}

int main() {
    int n;
    cout << " Enter the Rows and Column size.";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));

    // Take user input
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> matrix[i][j];
    }

    // Print orignal matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << matrix[i][j] << "  ";
        cout << endl;
    }

    cout << endl;
    // sort rows
    sortRows(matrix);

    // print modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << matrix[i][j] << "  ";
        cout << endl;
    }
}