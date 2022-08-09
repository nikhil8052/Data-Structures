
#include <iostream>

using namespace std;


int fibbo(int n ){
   if(n==0 || n ==1 ) return 1 ;
   return fibbo(n-1)+fibbo(n-2);
}

int main()
{

    int n ; 
    cin>>n ;
    cout<<" fibonacci is :-"<<fibbo(n);    
    return 0;
}