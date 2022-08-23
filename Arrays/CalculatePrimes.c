#include <stdio.h>
#include <stdlib.h>
#include<math.h>


// Check Prime Number
int isPrime(int n) {
    if (n == 0 || n == 1) return 0;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Calculate the primes
void calculatePrimes(int *arr, int n) {
    if (n == 0) {
        printf(" No elements are available. ");
        return;
    }
    int tp = 0;
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            printf(" %d ", arr[i]);
            tp++;
        }
    }
    printf(" \nTotal primes are %d ",tp);
    printf(" \nNot Primes are  %d ",n-tp);

}

// To get the input of any number
int getNumInput() {
    int n;
    printf(" Enter the number ");
    scanf(" %d", &n);
    return n;
}

// To get the array Input
int *getArrayInput(int size) {
    int *arr = (int *)malloc(sizeof(int));
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    return arr;
}
// To print the arr
void printArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf(" %d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int *arr = getArrayInput(5);
    printArray(arr, 5);
    calculatePrimes(arr, 5);
}