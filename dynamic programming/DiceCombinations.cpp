
/*
   PROBLEM :- You have given one Number N and dice which has 6 possiblities of number to appear 
   1,2,3,4,5 and 6. You can jumps dice more than one time. Find the number of ways you can 
   generate the sum N.

   Example : N=3 
   Output : 4 

   Explanation : 3 
   One way :-  1+1+1
   Second way:-  2+1
   Third Way :-  1+2
   Fourth Way:-  3

    Total ways are 4 that's why answer is 4.
*/
#include <iostream>
#include<vector>

using namespace std;

int main() {
    int n;
    cout << " Enter the Number : ";
    cin >> n;
    vector<int> dp(n+1,0);
    dp[0]=1;
    dp[1]=1;

    for(int i=2; i<=n ; i++){
        for(int j=1 ; j<=6 ; j++){
             if(j>i) continue; 
             dp[i]=dp[j-1]+dp[i-j];
        }
    }

    cout<<dp[n];
}


/*

   Solution Explanation:- 

   What we can think..? 

   First just assume we have 6 numbers 1 to 6 .

   we have given a function f(n) which returns the total number of paths.

   let's assume N=3.

   f(3) --> here how many possiblities are there we can make the three. 

   Six calls 1,2,3,4,5,6 .. This numbers can only be appeared on this level. 

                f(3)
            f(1)  f(2)  f(3)


    either one, two and three are the possible throws. 

    If one has come so f(3)-f(1) = f(2) (Now count for f(2) )
    If tow has come so f(3)-f(2) = f(1) (Now count for f(1) )
    If three has come so f(3)-f(3) = f(0) (Now count for f(0) )


   Firsr stack 

                f(3)
            f(1)   f(2)   f(3)
    ------------------------------------

  Second Stack 

        f(2)   f(1)   f(0)
    f(1) f(2)   f(0)


IN this manner for every level we make the six calls and try to calculate the sub problem.


f(n)= f(n-1)+f(n-2)+f(n-3)+f(n-4)+f(n-5)+f(n-6)

This is the recurence relation for it for every level.

we are also solving the sub problem again and again so better to store in the dp.

Let's dry run it on the pen and paper. 


*/