
/*
  PROBLEM :- You have given an array.Every value in the array represents some money value.
  You have also given one integer x which represent the total money. Your task is to calculate 
  the minimum number of coins to generate X.

  Example : 3 11 
      coins=[1,5,7]

      Output:  3 

   Explanation :  we can take 5+5+1 coins.
   These are the minimum coins to generate the sum 11.


*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<limits.h>


using namespace std;

int main() {
    int n,money;
    cout << " Enter the Coin Count And Money to be counted : ";
    cin >> n>>money;
    cout<<" Enter the Coins : ";
    vector<int> coins(n);
    for(int i=0; i< n ; i++) cin>>coins[i];
    vector<int> dp(n+1,INT_MAX);
 
    dp[0]=0;
    for(int i=1; i<=money ; i++){
       for(int j=0; j<coins.size();j++){
                if(coins[j]>i) continue; 
                dp[i]=min(dp[i],dp[i-coins[j]]+1);
       }
    }

if(dp[money]==INT_MAX) cout<<"-1";
else  cout<<dp[money];

}


