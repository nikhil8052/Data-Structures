#include<iostream>

using namespace std ;

int main(){
    
   int n;
   cout<<" Enter the Number. ";
   cin>>n;
   (n&1)==1 ? cout<<" Number is Odd." : cout<<" Number is Even.";
}