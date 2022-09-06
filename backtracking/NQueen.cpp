/**
 *   
 *   Problem Link : https://www.geeksforgeeks.org/n-queen-problem-backtracking-3/ 
 * 
 *   Problem :- You have given an n*n grid. Your task is to place the N queen in the board.
 *   If a queen has been placed in any of the cell then you can not place another queen to it's 
 *   upper right diagonal, Upper left diagonal, bottom  right diagonal , bottom left diagonal. Your task is 
 *   find the total number of ways to place n queen in the n*n Grid.
 * 
 * 
 * 
 */

#include <iostream>
#include <vector>

using namespace std;

int count = 0;

bool isItSafe(vector<vector<bool>> &grid, int row, int col, int n) {
    // check the above rows
    for (int i = row; i >= 0; i--) {
        if (grid[i][col]) return false;
    }

    // check the left diagnal
    for (int i = row, j = col; i >= 0 && j >= 0; j--, i--) {
        if (grid[i][j]) return false;
    }

    // check the upper right diagonal
    for (int i = row, j = col; i >= 0 && j < n; i--, j++) {
        if (grid[i][j]) return false;
    }

    return true;
}

void NQueen(vector<vector<bool>> &grid, int cur_row, int n) {
    if (cur_row == n) {
        count++;
        return;
    }

    for (int i = 0; i < n; i++) {
        if (isItSafe(grid, cur_row, i, n)) {
            grid[cur_row][i] = true;
            NQueen(grid, cur_row + 1, n);
            grid[cur_row][i] = false;
        }
    }
}

int main() {
    int n;
    cout << " Enter the Grid Size";
    cin >> n;

    vector<vector<bool>> grid(n, vector<bool>(n, false));
    NQueen(grid, 0, n);
    cout << " Ways to place N Queens are :- " << count;
}