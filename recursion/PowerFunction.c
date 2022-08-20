#include <stdio.h>

// Power function
long int pow(int n, int i) {
    if (i == 1) return n;
    if (i & 1) {
        return (pow(n, i / 2) * n) * pow(n, i / 2);
    } else {
        return pow(n, i / 2) * pow(n, i / 2);
    }
}

int main() { printf(" %lld ", pow(2, 1000)); }