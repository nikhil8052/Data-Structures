/*
  INPUT :- abc

OUTPUT :- 
 abc
 ab
 ac
 a
 bc
 b
 c

*/

#include <iostream>
#include<vector>
#include<string>

#define vi vector<int> 
#define loop(n) for(int i = 0; i < n; i++)
#define print(arr) loop(arr.size()){cout<<arr[i]<<" "; } 
#define in(arr,n) loop(n){cin>>arr[i];}
#define ll long long int 

using namespace std;

// String subsquence 
// Little bit explation about the logic is ( One time append the current character and one time don't append current character.😀)
void stringSubsquence(string str , int i , string osf ){
  if(i==str.length()){
    cout<<osf<<endl;
    return ;
  }

  stringSubsquence(str,i+1,osf+str[i]);
  stringSubsquence(str,i+1,osf);
}

int main() {

    // Start code from here 
    string str;
    cin >> str;
   stringSubsquence(str,0," ");
    cout<<"NOt Done";
}