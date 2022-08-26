/*
  PROBLEM :- You have given one n*m Grid where one rat has been standing at cell ( 0,0 ) 

  In how many ways rat can reach to the (n,m) cell.

  Example :- 


Input :  n = 2, m = 3;
Output : 3

There are three paths
(0, 0) -> (0, 1) -> (0, 2) -> (1, 2)
(0, 0) -> (0, 1) -> (1, 1) -> (1, 2)
(0, 0) -> (1, 0) -> (1, 1) -> (1, 2)


*/
#include <stdio.h>

// To get the input of any number
int getNumInput(char *str ) {
    int n;
    printf(" Enter the number of %s ",str);
    scanf(" %d", &n);
    return n;
}

int count=0 ; 
int findPaths(int r , int c, int n , int m   ){
    if(r <0 || c < 0  || r >n || c > m  ) return ;
    if(r==n-1  && c==m-1 ) {
        count++;
    }
    findPaths(r,c+1,n,m);
    findPaths(r+1,c,n,m);
    return count ; 
}

int main() {
    int n = getNumInput("Rows");
    int m = getNumInput("Cols");

    printf(" Possible paths are :- %d ",findPaths(0,0,n,m));
}