/*

   You will be given one number print the smallest power of 2 of that number. 

   Example :- 
    Input : -  34
    Output :- 32 

    32 is the smallest power of 2 near the 34. 

    Input :-  11 
    Output: - 8 

    8 is the smallest power of 2 near the 11. 


*/

#include <stdio.h>

int getLowestPower(int n) {
   if(n==0 || n==1) return -1 ; 

  int i=2 ; 
   while(1){
       if(i>n){
        break; 
       }
       i=i<<1;
   }
   return i>>1; 
}

int main() {
    int n;
    printf(" Enter the number : ");
    scanf("%d", &n);
    printf("%d",getLowestPower(n));
}