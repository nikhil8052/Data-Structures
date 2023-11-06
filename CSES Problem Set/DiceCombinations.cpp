#include <iostream>
#include <bits/stdc++.h>
#define mod 1000000007
using namespace std;

int main()
{

    int n;
    cin >> n;

    vector<long long int> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 0; i <= n; i++)
    {
        for (int j = 1; j < 7; j++)
        {
             if(j>i) continue;
             dp[i]=(dp[i]%mod+dp[i-1]%mod)%mod;
        }
    }

    cout<<dp[n]%mod<<endl;

}