#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void reverseArray(int *arr, int l, int r) {
    if (l < r) {
        int tem = arr[l];
        arr[l] = arr[r];
        arr[r] = tem;
        reverseArray(arr, l + 1, r - 1);
    }
}

/* Avoid this code. It's template --STARTING*/

// Check Prime Number
int isPrime(int n) {
    if (n == 0 || n == 1) return 0;

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return 0;
    }
    return 1;
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

/*  --ENDING of template*/

int main() {
    int *arr = getArrayInput(5);
    printArray(arr, 5);
    reverseArray(arr, 0, 4);
    printArray(arr, 5);
    printf("\nStatus: Done.");
}