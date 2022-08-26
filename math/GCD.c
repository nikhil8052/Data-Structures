#include <stdio.h>

// Time Complexity: O(log(min(a,b))
// Auxiliary Space: O(log(min(a,b))

int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}


//  Time Complexity : O(min(a,b))
// Auxiliary Space: O(min(a,b))  
int gcd1(int a, int b) {
    if(a==b) return a ; 
    if (a == 0) return b;
    if (b == 0) return a;

    if (a > b) {
        gcd1(a - b, b);
    } else {
        gcd1(a, b-a);
    }
}

int main() {
    int a, b;
    printf(" Enter the Number A ");
    scanf("%d", &a);
    printf(" Enter the Number B ");
    scanf("%d", &b);
    printf(" %d \n", gcd(a, b));
    printf(" %d ", gcd1(a, b));
}