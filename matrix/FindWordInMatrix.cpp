
/**
 * @file FindWordInMatrix.cpp
 * @author Nikhil
 * @brief Find word in the matrix
 * @date 2022-07-30
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <vector>

using namespace std;

// Search the word in the matrix recursively.
bool search(vector<vector<char>> &grid, string word, int position, int row,int col) {
    // conditions to be checked
    if (position == word.length()) return true;

    if (row < 0 || col < 0 || row >= grid.size() || col >= grid.size())
        return false;

    if (word[position] != grid[row][col]) return false;
    if (grid[row][col] == '$') return false;

    // Save the char
    char ch = grid[row][col];
    grid[row][col] = '$';
    bool flag = false;

    // Make left,right,top,botton calls
    for (int i = 0; i < 4; i++) {
        int rows[] = {1, -1, 0, 0};
        int cols[] = {0, 0, 1, -1};
        flag = search(grid, word, position + 1, row + rows[i], col + cols[i]);
        if (flag == true) break;
    }

    grid[row][col] = ch;
    return flag;
}

/*
Call this function to find word in the matrix.
true means word is present.
false means word is not present.
*/
bool findWord(vector<vector<char>> &grid, string word) {
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == word[0]) {
                if (search(grid, word, 0, i, j) == true) {
                    return true;
                }
            }
        }
    }
    return false;
}

// Code starts from here
int main() {
    vector<vector<char>> grid(10, vector<char>(10));
    string str;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> grid[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << grid[i][j];
        }
        cout << endl;
    }

    cout << " Enter the word need to be searched. ";
    cin >> str;

    if (findWord(grid, str)) {
        cout << "Word is present.";
    } else {
        cout << " Word is not present.";
    }

    return 1;
}