#include <iostream>
#include<vector>

#define vi vector<int> 
#define loop(n) for(int i = 0; i < n; i++)
#define print(arr) loop(arr.size()){cout<<arr[i]<<" "; } 
#define in(arr,n) loop(n){cin>>arr[i];}
#define ll long long int 

using namespace std;

bool checkPalindrome(string s ){

   int l=0,r=s.length()-1;
   while(l<r){
    if(s[l]!=s[r]) return false ;
    l++,r--;
   }
   return true  ;
}


int main() {

    // Start code from here 
    string str;
    cin >> str;
    cout << checkPalindrome(str);
    cout<<"Done";
}