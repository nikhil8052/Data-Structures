
/*

   Problem Explanation :- 

   We have an indexed array from 0 to n. Every index arr[i] donates the house with some gold.
   Theif can steal the gold from any house but the condition is that he can not steal the 
   gold of any neighbour house let's assume he steals gold from arr[i] so he can not 
   steal gold from arr[i-1] and arr[i+1]. 

   Find the maximum gold which he can steals. 
    
*/

#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int f ( vector<int > &arr , int i ){
    if(i==0 || i==1) return arr[i];
    f(arr,i-1);
    arr[i]=arr[i]+arr[i-2];
    arr[i]=max(arr[i-1],arr[i]);
}

int main()
{

    int n ;
    cin>>n ;
    vector<int> arr(n);
    for( int i=0 ; i< n ;i++) cin>>arr[i] ;
    f(arr,n-1);
    cout<<arr[n-1];
    return 0;
}