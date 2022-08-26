
/*
   PROBLEM :- FIND GCD OF THE ARRAY.
*/

#include<stdio.h>

// Time Complexity: O(log(min(a,b))
// Auxiliary Space: O(log(min(a,b))

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// FIND GCD OF THE ARRAY 
int findGCD(int *arr , int n ){
    int ans=arr[0] ;
    for(int i=1; i< n ; i++){
        ans=gcd(arr[i],ans);
    }
    return ans ; 

}
// CODE STARTS FROM HERE 
int main(){
    int n ; 
    printf(" Enter the number ");
    scanf("%d",&n);
    int arr[100];
    for(int i=0; i< n ; i++){
        scanf("%d",&arr[i]);

    }
    printf(" GCD of array is  %d ",findGCD(arr,n));
}