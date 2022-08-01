#include <iostream>
#include <vector>

using namespace std;

void rotateMatrixClockWise(vector<vector<int>> &matrix) {
    // length of the matrix .
    int size = matrix.size();

    //   Iterate over the first row
    for (int i = size-1; i>=0; i--) {
        int tem=matrix[0][i];
        matrix[0][i]=matrix[0][i-1];
        matrix[0][i]=tem;

        // cout << matrix[i][size - 1] << " ";
        // cout << matrix[size - 1][i] << " ";
        // cout << matrix[i][0];
    }

}

int main() {
    int size;
    cout << " Enter the matrix size. ";
    cin >> size;
    vector<vector<int>> matrix(size, vector<int>(size));

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    rotateMatrixClockWise(matrix);
    cout << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j]<<"  " ;
        }
        cout << endl;
    }
}