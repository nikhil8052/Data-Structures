
/*

Problem Link :-  https://leetcode.com/problems/climbing-stairs/ 

*/
#include <iostream>
#include<cstring>
using namespace std ; 

int dp[100005];
int climbStairs(int n) {
    if (n < 0) return 0;
    if (n == 0) {
        return dp[n] = 1;
    }
    if (dp[n] != -1) return dp[n];
    dp[n] = climbStairs(n - 1) + climbStairs(n - 2);
    return dp[n];
}

int main() {
    memset(dp, -1, sizeof(dp));
    cout<<climbStairs(44);
    cout<<"Done";
}