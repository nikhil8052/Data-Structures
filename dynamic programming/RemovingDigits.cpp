/*
  You are given an integer n. On each step, you may subtract one of the digits
from the number.

   How many steps are required to make the number equal to 0?

   Example

Input:
27

Output:
5

Explanation: An optimal solution is 27→20→18→10→9→0.

Note:- The number of steps must be minimum.


*/

#include <limits.h>
#include <algorithm>
#include <iostream>
#include <vector>

using namespace std;

// Provide the number and get the digits of the number in vector form
vector<int> getDigits(int n) {
    vector<int> digits;

    while (n) {
        if (n % 10 == 0) {
            n = n / 10;
            continue;
        }
        digits.push_back(n % 10);
        n = n / 10;
    }
    return digits;
}
int main() {
    int n;
    cout << " Enter the Number :";
    cin >> n;
    vector<int> dp(n + 1, 0);
    dp[0] = 0;
    for (int i = 1; i < 10; i++) dp[i] = 1;

    for (int i = 10; i <= n; i++) {
        vector<int> digits = getDigits(i);
        if(digits.size()==1){
            dp[i]=dp[i-digits[0]]+1;
            continue;
        }
        dp[i] = min(dp[i-digits[0]]+1,dp[i-digits[1]] + 1);
    }

    cout << dp[n];

    cout << "Status: Done.";
}