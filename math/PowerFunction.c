#include <stdio.h>

// Power function 
int pow(int n, int i) {
    if (i == 1) return n;
    int ans = 1;
    for (int j = 1; j <= i; j++) {
        ans = ans * n; 
    }
    return ans ; 
}

int main() { printf(" %d ", pow(2, 2)); }