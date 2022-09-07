#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<vector<int>> dp(n + 1, vector<int>(n + 1, 0));
    dp[1][1] = 1;
    for (int row = 2; row <= n; row++) {
        for (int col = 1; col < row + 1; col++) {
            if (col == 1) {
                dp[row][col] = 1;
                continue;
            }
            dp[row][col] = dp[row - 1][col - 1] + dp[row - 1][col];
        }
    }

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << dp[i][j] << "  ";
        }
        cout << endl;
    }
}