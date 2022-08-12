/* 
  Expert Level Problem.
  Median of two sorted arrays.
  
  Time Complexity must be O(log(n+m))

*/

#include <stdio.h>

int max(int num1, int num2) { return (num1 > num2) ? num1 : num2; }

int min(int num1, int num2) { return (num1 > num2) ? num2 : num1; }

// Median of Two elements
double median2(int ele1, int ele2) { return (double)(ele1 + ele2) / 2; }

// Median of three element
double median3(int e1, int e2, int e3) {
    long long int sum = e1 + e2 + e3;
    long long int allmax = max(e1, max(e2, e3));
    long long int allmin = min(e1, min(e2, e3));
    return sum - allmax - allmin;
}

double median4(int a, int b, int c, int d) {
    long long int allsum = a + b + c + d;
    long long int allmax = max(a, max(b, max(c, d)));
    long long int allmin = min(a, min(b, min(c, d)));
    return (double)(allsum - allmin - allmax) / 2;
}

// Find median of any array
double medianArr(int* arr, int n) {
    if (n == 0) return -1;
    if (n % 2 == 0) {
        n = n / 2;
        return median2(arr[n], arr[n - 1]);
    }
    n = n / 2;
    return arr[n];
}

double helpme(int* nums1, int nums1Size, int* nums2, int nums2Size) {
    if (nums1Size == 0) return medianArr(nums2, nums2Size);

    if (nums1Size == 1) {
        if (nums2Size == 1) {
            return median2(nums1[0], nums2[0]);
        }

        if (nums2Size & 1) {
            return median2(nums2[nums2Size / 2],
                           median3(nums1[0], nums2[nums2Size / 2 - 1],
                                   nums2[nums2Size / 2 + 1]));
        }
        return median3(nums1[0], nums2[nums2Size / 2 - 1],
                       nums2[nums2Size / 2]);
    }

    if (nums1Size == 2) {
        if (nums2Size == 2) {
            return median4(nums1[0], nums2[0], nums1[1], nums2[1]);
        }
        if (nums2Size & 1) {
            return median3(nums2[nums2Size / 2],
                           max(nums1[0], nums2[nums2Size / 2 - 1]),
                           min(nums1[1], nums2[nums2Size / 2 + 1]));
        }

        return median4(nums2[nums2Size / 2], nums2[nums2Size / 2 - 1],
                       max(nums1[0], nums2[nums2Size / 2 - 2]),
                       min(nums1[1], nums2[nums2Size / 2 + 1]));
    }
    int idxA = (nums1Size - 1) / 2;
    int idxB = (nums2Size - 1) / 2;

    if (nums1[idxA] <= nums2[idxB])
        return helpme(nums1 + idxA, nums1Size / 2 + 1, nums2, nums2Size - idxA);

    return helpme(nums1, nums1Size / 2 + 1, nums2 + idxA, nums2Size - idxA);
}

double findMedianSortedArrays(int* nums1, int nums1Size, int* nums2,
                              int nums2Size) {
    if (nums1Size <= nums2Size) {
        return helpme(nums1, nums1Size, nums2, nums2Size);
    } else {
        return helpme(nums2, nums2Size, nums1, nums1Size);
    }
}

int main() {
    int ar1[] = {1,2};
    int ar2[] = { 3,4 };
    printf("%f ",findMedianSortedArrays(ar1,2,ar2,2));
}