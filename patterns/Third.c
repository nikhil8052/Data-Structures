
/*

Problem : Print the below pattern 

Enter the number 10
**********
*********
********
*******
******
*****
****
***
**
*


*/
#include <stdio.h>

void print(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j<n-i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return; 
}

int main() {
    int n;
    printf(" Enter the number ");
    scanf("%d", &n);
    print(n);
    printf(" Status: Done ");
}