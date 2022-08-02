

/*


     1   2   3   4   5
     6   7   8   9   10
     11  12  13  14  15
     16  17  18  19  20
     21  22  23  24  25

*/
#include <iostream>
#include <vector>

using namespace std;

// Rotate matrix
void rotateMatrixClockWise(vector<vector<int>> &matrix) {
    // length of the matrix .
    int size = matrix.size();
    int lastIndex = size - 1;
    int curRing = 0;

    while (curRing < (size / 2)) {
        //   Iterate over the first row of ever ring and rotate it.
        int pre = matrix[curRing + 1][curRing];
        for (int i = curRing; i < size - curRing; i++) {
            int cur = matrix[curRing][i];
            matrix[curRing][i] = pre;
            pre = cur;
        }

        // Iterate over the last column of every ring and rotate it .
        for (int i = curRing + 1; i < size - curRing; i++) {
            int cur = matrix[i][lastIndex - curRing];
            matrix[i][lastIndex - curRing] = pre;
            pre = cur;
        }

        // Iterate over the last row of every ring and then rotate it .
        for (int i = lastIndex - curRing - 1; i >= curRing; i--) {
            int cur = matrix[lastIndex - curRing][i];
            matrix[lastIndex - curRing][i] = pre;
            pre = cur;
        }

        // Iterate over the first column of every ring and rotate it.
        for (int i = lastIndex - curRing - 1; i >= curRing; i--) {
            int cur = matrix[i][curRing];
            matrix[i][curRing] = pre;
            pre = cur;
        }

        curRing++;
    }

    // Print the matrix.
    cout << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "  ";
        }
        cout << endl;
    }
}

// Code starts from here
int main() {
    int size;
    cout << " Enter the Rows and Colums Size. ";
    cin >> size;
    vector<vector<int>> matrix(size, vector<int>(size));

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cin >> matrix[i][j];
        }
    }

    rotateMatrixClockWise(matrix);
    cout << "Done";
}