#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int countFactors(int n) {
    int tem = n;
    int count = 0;
    while (tem) {
        if (n % tem == 0) count++;
        tem--;
    }
    return count ; 
}

int main() {
    int n;
    printf("Enter the number : ");
    scanf("%d", &n);
    printf("%d ", countFactors(n));
    printf("\nStatus: Done.");
}