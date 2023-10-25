#include<iostream>
#include<bits/stdc++.h>


using namespace std ;

int main(){


   int n , q ;
   cin>>n>>q ; 

   vector<int> arr(n,0);

   while( q--){
     int l,r;
     cin>> l>>r ;
     arr[l]+=1;
     if( r+1 < n )
     arr[r+1]-=1;
   }

for( int i=1; i< arr.size(); i++){
    arr[i]= arr[i]+arr[i-1];
}

   
for( int i=0; i< arr.size(); i++){
    cout<< arr[i]<< " ";
}
    return 0 ;
}