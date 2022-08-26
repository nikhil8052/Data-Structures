
/*
   Find the number of factor of a number is even or odd
   which means count the total factor and then count that and find whether even or odd. 

   I have provided here both the solutions Effcient and brute.

   Try to iterate and get the logic of the code 😊😊 .


*/
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

char* effcientCount(int n) {
    int tem = (int)sqrt(n);
    if (tem * tem == n)
        return "Odd";
    else
        return "Even";
}

char* bruteForceCount(int n) {
    int tem = n;
    int count = 0;
    while (tem) {
        if (n % tem == 0) count++;
        tem--;
    }

    if (count & 1)
        return "Odd";
    else
        return "Even";
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("Brute Force Count : - %s \n ", bruteForceCount(n));
    printf("Effcient Count : - %s ", effcientCount(n));
    printf("\nStatus: Done.");
}