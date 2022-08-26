#include <stdio.h>
#include <stdlib.h>
#include<math.h>

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

// Check Prime Number 
int isPrime(int n) {
    if (n == 0 || n == 1) return 0;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n = getNumInput();
    isPrime(n) ? printf(" Yes ") : printf(" No ");
}