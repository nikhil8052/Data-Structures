
/*
Consider a money system consisting of n coins. Each coin has a positive integer value. Your task is to calculate the number of distinct ordered ways you can produce a money sum x using the available coins.

For example, if the coins are {2,3,5} and the desired sum is 9, there are 3 ways:
2+2+5
3+3+3
2+2+2+3

Output is 3 


because we can take only one permutation.


like 2+2+5 
     2+5+2
     5+2+2 

     must be considered as one permutation. 

 Explanation of this question is defined at the last of this file. Do check. 
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
    vector<int> dp(money+1,0);
    for(int i=0; i< n ; i++) cin>>coins[i];
    dp[0]=1;

    for(int i=0 ; i<n ; i++){
      for(int j=1 ; j<= money ; j++ ){
         if(coins[i]>j) continue; 
         dp[j]=dp[j]+dp[j-coins[i]];
      }
    }
  
  cout<<dp[money];

}



/*
    Problem explanation :- 

    Let's if somehow we are able to calculate that any coin at index i. 
    Using this for which numbers we can make.

    Example 
    if we have 9 

   if we have coin 2 so using coin 2 we can make this values at max one time. 

   like 4 = 2+2 
   8 = 2+2+2+2 and so on.

    0 1 2 3 4 5 6 7 8 9 10   dp[i]  array index 

    1 0 1 0 1 0 1 0 1 0 1   dp[i]   values 

    After this 3 comes into the pitcher. 
    we will repeat the same process we will calculate using three how many values we can make. 

    let's iterate over the dp array. 


    0 1 2 3 4 5 6 7 8 9    dp[i] index 

    1 0 1 1 2 1 2 0 1 1   dp[i]  values 


    we can have this values after haveing the 3 iteration. 


    Let's iterate over the 5 also. 


    0 1 2 3 4 5 6 7 8 9   dp[i]  index 

    1 0 1 1 1 2 2 0 1 3   dp[i] values 


    after iteration of 5 we have the correct answer. 


    just return the dp[x] which is three . 



*/