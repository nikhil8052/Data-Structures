
/*
   Search element in the array using binary search. 

   Assume that array is already sorted which is given to you. 
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>

// Search Element in the array 
int binarySearch(int *arr, int size, int ele) {
    int l = 0, r = size - 1, mid = (l + r) / 2;

    while (mid<=r || mid>=l) {
        if (ele > arr[mid]) {
            l = mid + 1;
        } else if (ele < arr[mid]) {
            r = mid - 1;
        } else {
            return mid;
        }
        mid = (l + r) / 2;
    }

    return -1;
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
    int *arr = getArrayInput(5);
    printArray(arr, 5);
    printf("%d \n", binarySearch(arr, 5, 6));
    printf("Done");
}