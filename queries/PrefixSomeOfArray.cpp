#include<iostream>
#include<bits/stdc++.h>


using namespace std ;

int main(){


   int n ;
   cin>>n; 

   vector<int> arr(n,0);

   
   for( int i=0; i<n ; i++) cin>>arr[i];

for( int i=1; i< n; i++){
    arr[i]= arr[i]+arr[i-1];
}

for( int i=0; i< n ; i++){
    cout<< arr[i]<< " ";
}
    return 0 ;
}