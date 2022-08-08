/*

   Written By : - Nikhil 
   Date :- 07 August 2022 
   Brief :- Find unique element where every element occurs twice .

   Find the Unique element from the array where every element occurs twice . 
   We can solve this problem by multiple ways I am considering here the best solution . 

*/


#include <iostream>
#include <vector>

using namespace std;


int findUnique(vector<int> &arr ){
  int unique=0 ;
  for ( int i=0 ; i< arr.size() ; i++)  unique=unique^arr[i];
  return  unique ; 

}



int main() {
    int n, times;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout<<"Unique element is "<<findUnique(arr);
    cout<<"Done";
}