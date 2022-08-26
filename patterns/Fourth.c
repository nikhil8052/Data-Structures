
/*

Problem : Print the below pattern
 Enter the number 3

 3  3  3  2  2  2  1  1  1 
 3  3  2  2  1  1
 3  2  1

*/
#include <stdio.h>

void print(int n) {
    int j;
    for (int i = n; i>0; i--) {
        j = i;
        for (int k = n; k > 0; k--) {
            for (int m = 0; m <j; m++) {
                printf(" %d ", k);
            }
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
    printf(" Status: Done.");
}