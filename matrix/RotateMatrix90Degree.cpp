

/*

Input :  1  2  3
         4  5  6
         7  8  9


Output : 9 8 7
         6 5 4
         3 2 1

*/

#include <iostream>
#include <vector>

using namespace std;

// Rotate matrix by 180 degree.
void rotateMatrix90Degree(vector<vector<int>> &matrix) {
    
    
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

    rotateMatrix90Degree(matrix);

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}