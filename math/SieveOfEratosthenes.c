/*
  Prime seive.

 Print all the prime numbers from 1 to n .


*/

#include <math.h>
#include <stdio.h>

// Set all the values with 0 .
int sieve[100032] = {0};

void printPrimes(int n) {
    // Sieve of Eratosthenes
    sieve[0] = sieve[1] = 1;
    for (int i = 2; i <= sqrt(n); i++) {
        if (sieve[i] == 0) {
            for (int j = i + i; j <= n; j += i) {
                sieve[j] = 1;
            }
        }
    }

    //  Print all the primes within the range
    for (int i = 0; i <= n; i++) {
        if (sieve[i] == 0) printf(" %d ", i);
    }
}

int main() {
    int n;
    printf(" Enter the number ");
    scanf("%d", &n);
    printPrimes(n);
}