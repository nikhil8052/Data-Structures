/*

    Find fibonacci series using dynamic programming.
*/

#include <cstring>
#include <iostream>

using namespace std;

// DP array 
int dp[100005];

// Fibbo function 
int fib(int n) {
    if (n == 0 || n == 1) return n;
    if (dp[n] != -1) return dp[n];
    return dp[n] = fib(n - 1) + fib(n - 2);
}

// Code starts from here 
int main() {
    memset(dp, -1, sizeof(dp));
    cout << fib(5);
}