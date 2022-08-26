/*

  Find size without using sizeof operator. 

 Apply the same logic for float,double etc. 
 
*/

#include<stdio.h>

int main(){

    int n; 
    int bytes=(char*)(&n+1)-(char*)(&n);
    printf(" Without using sizeof Operator:- %d ",bytes);
    
}