
/*

    PROBLEM : You have to find a path through which the rat move from the
   starting position (0,0) to the final position where cheese is (n,n). List the
   total no of possible paths which the rat can take to reach the cheese.

     1 DONATES THE BLOCKED CELL.
     0 DONATES YOU CAN MOVE TOWARDS THE CELL.

     OUTPUT : IN HOW MANY WAYS WE CAN REACH TO DESTINATION.

     EXAMPLE :   0 1
                 0 0

     ANSWER IS:-   1 (ONLY ONE PATH EXISTS.)


*/
#include <iostream>
#include <vector>

using namespace std;
int totalPaths = 0;

// IS THE CURRENT MOVE WITHIN THE BOUNDARY OR NOT. 
bool isIn(int r, int c, int n) {
    if (r >= 0 && c >= 0 && r <= n - 1 && c <= n - 1) return true;
    return false;
}

// FIND PATH FUNCTION
void findPathHelper(int r, int c, int n, vector<vector<int>> &grid,vector<vector<bool>> &visited) {
    
    // LAST CELL 
    if (r == (n - 1) && c == (n - 1)) {
        totalPaths++;
        return;
    }

    visited[r][c] = true;
    for (int i = 0; i < 4; i++) {
        int rows[] = {0, 0, 1, -1};
        int cols[] = {1, -1, 0, 0};
        int row = r + rows[i];
        int col = c + cols[i];
        if (isIn(row, col, n) && grid[row][col] != 1 &&
            visited[row][col] != true) {
            findPathHelper(row, col, n, grid, visited);
        }
    }
    visited[r][c] = false;
}

// RETURNS THE TOTAL PATH EXISTS.
int findPaths(vector<vector<int>> &grid) {
    int n = grid.size();
    vector<vector<bool>> visited(n, vector<bool>(n, false));
    findPathHelper(0, 0, n, grid, visited);
    return totalPaths;
}

// CODE STARTS FROM HERE 
int main() {
    int n;
    cout << " Enter the Row And Column Size. ";
    cin >> n;
    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) cin >> grid[i][j];
    }
    cout << "Total Paths:- " << findPaths(grid);
    cout<<"Status:Done";
}