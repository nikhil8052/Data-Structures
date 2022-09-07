/**
 * @file KnightTour.cpp
 * @author Nikhil
 * @brief Knight chess
 * @version 0.1
 * @date 2022-09-07
 *
 * @copyright Copyright (c) 2022
 *
 *
 *   Problem Link :-
 * https://www.geeksforgeeks.org/the-knights-tour-problem-backtracking-1/ 
 * 
 * You have given a knight standing at position 0,0 calculate the path where knight
 * can move.
 */
#include <iostream>
#include <vector>

using namespace std;

// To display the grid 
void display(vector<vector<int>> &grid) {
    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid.size(); j++) {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    cout << "\n";
}

// Is it good cell to move on 
bool isItGoodToGo(int i, int j, int n, vector<vector<bool>> &visited) {
    if (i >= 0 && i < n && j >= 0 && j < n && visited[i][j] == false)
        return true;
    return false;
}

// Calculate all the paths 
void knightTour(vector<vector<int>> &grid, int row, int col, int count, int n,vector<vector<bool>> &visited) {

    // Base case 
    if (count == n * n - 1) {
        grid[row][col] = count;
        display(grid);
        return;
    }

    grid[row][col] = count;
    visited[row][col] = true;
    for (int i = 0; i < 8; i++) {
        // Moving directions 
        int x[8] = {2, 1, -1, -2, -2, -1, 1, 2};
        int y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
        int cr = row + x[i];
        int cc = col + y[i];
        if (isItGoodToGo(cr, cc, n, visited)) {
            knightTour(grid, cr, cc, count + 1, n, visited);
        }
    }
    // backtracking (Revert the state of the Problem.)
    grid[row][col] = -1;
    visited[row][col] = false;
    return;
}
int main() {
    int n;
    cout << " Enter the Grid Size";
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n, -1));
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    knightTour(grid, 0, 0, 0, n, visited);

    cout << "Status : Done";
}



/*
    Time complexity : on every cell 8 calls 
     8 raise to the power n^2  loss bound. 

     But on every cell we don't make the 8 calls but even make 7 calls because the cell from which 
     we have come we never make that call. 

     so 7 raise to the power n^2. 

     and on boundries we make only one call. 
     so boundries cell we can also reduce. 
*/