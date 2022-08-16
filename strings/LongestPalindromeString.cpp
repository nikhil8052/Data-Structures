
/*
  Find longest palindrome string. 

  LINK:- https://leetcode.com/problems/longest-palindromic-substring/

*/

#include <iostream>
#include<vector>

#define vi vector<int> 
#define loop(n) for(int i = 0; i < n; i++)
#define print(arr) loop(arr.size()){cout<<arr[i]<<" "; } 
#define in(arr,n) loop(n){cin>>arr[i];}
#define ll long long int 

using namespace std;


bool checkPalindrome(string s , int l , int r ){

   while(l<r){
    if(s[l]!=s[r]) return false ;
    l++,r--;
   }
   return true  ;
}


//Brute Force 
bool findLongestPalindrome(string s ){
    return true ;
}

int main() {

    // Start code from here 
    string str;
    cin >> str;
    cout << findLongestPalindrome(str);
    cout<<"Not Done";
}