
/*
 Find the Third  largest in the array.


*/
#include <stdio.h>
#include <stdlib.h>

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

// Find Second Largest Number in the array
int findThirdLargest(int *arr, int size) {
    if (size == 0) return -1;
    int first, second, third;
    first = second = third = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            third = second;
            second = first;
            first = arr[i];
        }
        if (arr[i] < first  ) {
            second = arr[i];
        }

        if(arr[i]<second ){
            third=arr[i];
        }
    }

    return third;
}

int main() {
    int *arr = getArrayInput(5);
    printArray(arr, 5);
    printf("Third Largest Element :  %d ", findThirdLargest(arr, 5));
    printf("Not Done ");
}