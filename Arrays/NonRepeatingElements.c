#include <math.h>
#include <stdio.h>
#include <stdlib.h>

void nonRepeatingElements(int *arr, int size) {
    if (size == 0) return;

    int i, j;
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (j == i) continue;
            if (arr[i] == arr[j]) break;
        }
        if (j == size ) printf(" %d ", arr[i]);
    }
}

/* Avoid this code. It's template --STARTING*/
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
    int *arr = getArrayInput(6);
    nonRepeatingElements(arr, 6);
    // printArray(arr, 5);
    printf("\nStatus: Not Done.");
}