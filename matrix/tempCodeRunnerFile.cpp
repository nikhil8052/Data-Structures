
/*
   Written By : Nikhil
   Date :- 05 August 2022

   Problem : - Sort matrix row and column wise.

   Approach :-

   Sort all the rows.
   Traspose the matrix.
   Again sort the rows.
   Again sort the rows.

   Tip :- For understand the approach do iterate the algorithm on paper to
better understanding.

   Input : -
    4  1  3
    9  8  6
    5  2  7

Output :-
    1  3  4
    2  5  7
    6  8  9


*/

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

// Transpose the Matrix
void transpose(vector<vector<int>> &matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    int k = 0, i = 0, j = 0;
    while (k < row) {
        j = k;
        while (j < col) {
            int tem = matrix[k][j];
            matrix[k][j] = matrix[j][k];
            matrix[j][k] = tem;
            j++;
        }
        k++;
    }
}

// Sort Rows of a matrix
int sortRowsAndColumns(vector<vector<int>> &matrix) {
    int size = matrix.size();

    for (int i = 0; i < size; i++) {
        mergeSort(matrix[i], 0, size - 1);
    }
    transpose(matrix);
    for (int i = 0; i < size; i++) {
        mergeSort(matrix[i], 0, size - 1);
    }
    transpose(matrix);
}

/*Code starts from here */
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
    sortRowsAndColumns(matrix);

    // print modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << matrix[i][j] << "  ";
        cout << endl;
    }
}