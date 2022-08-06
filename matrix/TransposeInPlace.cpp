

/* 
  Written By :- Nikhil 
  Date :- 5 August 2022 
  Brief :- Transpose inplace 
*/

#include <iostream>
#include <vector>

using namespace std;

void transpose(vector<vector<int>> &matrix) {
    int row = matrix.size();
    int col = matrix[0].size();
    int k = 0, i = 0, j = 0;
    while (k < row) {
        j=k;
        while (j < col) {
            int tem = matrix[k][j];
            matrix[k][j]=matrix[j][k];
            matrix[j][k] = tem;
            j++;
        }
        k++;
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
    transpose(matrix);

    // print modified matrix
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cout << matrix[i][j] << "  ";
        cout << endl;
    }
}