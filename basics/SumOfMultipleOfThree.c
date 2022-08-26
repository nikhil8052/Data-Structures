/*
   We have given one number find the sum of multiple of 3 . 

   Example :- 1000 

   3's multiples 3,6,9,12,15,18.....999.

   Sum this all the multiples and print the sum. 

   Time Complexity must be O(1).

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>


// USE THE ARTHIMATIC  PROGRESSION TECHNIQUE OR FORMULA HERE 
// Time complexity O(1)
int effcientCalculation(int  n ){

    if(n<3 ) return 0 ;

    // find the last term of the AP ( ARTHIMATIC PROGRESSION )
    int last_term= (n / 3 ) * 3 ; 
    int total_terms=(n/3) ;
    return (total_terms/2)!=0 ? (total_terms/2)*(3+last_term) : 3  ;
   
}
// Note :- If the AP has only one element like 3 so only one element n/2 will lead us to 0 
// so check the following conditio 
// (total_terms/2)!=0 ? (total_terms/2)*(3+last_term) : 3  ;


// Brute force method 
int bruteForceCalculation(int n) {
    if(n<3) return 0 ;
    int sum=0 ;
    for(int i=3 ; i <= n ; i+=3){
        sum+=i;
    }
    return sum ; 

}

// Code Starts from here only 
int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf(" Brute Force Method Results : - %d ", bruteForceCalculation(n));
    printf("\nEffcient Method Results : - %d ", effcientCalculation(n));
    printf("\nStatus: Done.");
}