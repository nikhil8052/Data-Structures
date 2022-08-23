/*
  Sort array which contains the only 0,1 and 2 with time complexity O(n)

  Input :- 

  {1,1,2,0,2,0}

  Output :- 

  {0,0,1,1,2,2}

*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Algorithm 
void dutchNationalFlag(int *arr, int size) {
    if (size == 0) return;

    int c = 0, l = 0, r = size - 1;
    while (c!=r) {
        if (arr[c] == 1) {
            c++;
            continue;

        } else if (arr[c] == 0) {
            int tem = arr[c];
            arr[c] = arr[l];
            arr[l] = tem;
            l++;
            c++;

        } else if (arr[c] == 2) {
            int tem = arr[r];
            arr[r] = arr[c];
            arr[c] = tem;
            r--;
        }
    }
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
    dutchNationalFlag(arr, 5);
    printArray(arr, 5);
}