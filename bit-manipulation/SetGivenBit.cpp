/*
  Written By : Nikhil 
  Date : 5 August 2022
  Brief :- Set given bit of a number.
*/

#include <iostream>

using namespace std;

// Set the given bit if it is unset 
int setBitAt(int number , int index ){
    return  number|(1<<index);
}

// Code starts from here .
int main() {
    int n,index;
    cout << " Enter the Number. ";
    cin >> n;
    cout<<" Enter the index bit to be set.";
    cin>>index ;
     cout <<setBitAt(n,index); 
}