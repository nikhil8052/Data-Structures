#include <stdio.h>


int dp[1000032]={0};
// Power function
long long int pow(int n, int i) {
    if (i == 1) return n;
    if(dp[i]!=0) return dp[i];
    if (i & 1) {
        return (pow(n, i / 2) * n) * pow(n, i / 2);
    } else {
        return pow(n, i / 2) * pow(n, i / 2);
    }
}

int main() { 
    printf(" %lld ", pow(3, 5)); 
    printf("Done");
    
}