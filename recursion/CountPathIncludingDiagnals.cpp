/*
  We have given 3 * 3 Matrix we are standing at location (0,0).
  calculate in how many ways we can reach to the cell (n-1,m-1).

 Note : We can only move down,right and diagonals cells.


 Enter Rows and Columns 3 3
 
 DDRR
 DRDR
 DRRD
 DR->
 D->R
 RDDR
 RDRD
 RD->
 RRDD
 R->D
 ->DR
 ->RD
 ->->
                                     
*/
#include<iostream>
using namespace std ; 

void printPaths(int n ,int m , int r, int c , string osf ){
    if(r>n-1 || c >m-1 ) return ; 
    if( r==n-1 && c == m-1 ){
        cout<<osf<<endl ; 
        return ;
    }
    printPaths( n , m ,  r+1,  c ,  osf+"D");
    printPaths( n , m ,  r,  c+1,  osf +"R");
    printPaths( n , m ,  r+1,  c+1,  osf +"->");
}
int main(){

    int n,m;
    cout<<" Enter Rows and Columns ";
    cin>>n>>m ;
    printPaths(n,m,0,0," ");
}