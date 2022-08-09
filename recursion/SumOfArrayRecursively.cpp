/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include<vector>
#include<algorithm>

using namespace std;

int cal(vector<int> &arr , int i ){
    if(i==arr.size()-1) return arr[i] ; 
    return arr[i]+cal(arr,i+1);
}

int main()
{

    int n ; 
    cin>>n ;
    vector<int> arr(n) ;
    for( int i=0 ; i< n ; i++) cin>>arr[i];
    int ans=cal(arr,0);
    cout<<"This is the Answer :- "<<ans ;
    return 0;
}