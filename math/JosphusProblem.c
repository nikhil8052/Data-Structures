/*
  PROBLEM LINK :- https://www.geeksforgeeks.org/josephus-problem-set-1-a-on-solution/ 
*/
#include <stdio.h>

// To get the input of any number
int getNumInput() {
    int n;
    printf(" Enter the number ");
    scanf(" %d", &n);
    return n;
}

int josphus(int n , int k ){
    if(n==1) return 0 ; 
    return (josphus(n-1,k)+k)%n;
}
int main() {
    int n = getNumInput();
    int k = getNumInput();

    printf(" Saved Person :- %d ",josphus(n,k));
}