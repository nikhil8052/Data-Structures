/*

   Problem :- Print below series. 

   1 1 2 3 4 9 8 27 16 81 32 243 64 729 128 
   

*/

#include <stdio.h>

static int odd = 1;
static int even = 1;


int dp[1000032]={0};
// Power function
long long int pow(int n, int i) {
    if (i == 1) return n;
    if(dp[i]!=0) return dp[i];
    if (i & 1) {
        return (pow(n, i / 2) * n) * pow(n, i / 2);
    } else {
        return pow(n, i / 2) * pow(n, i / 2);
    }
}

void print(int n) {
    if (n == 1) {
        printf("%d", 1);
        return;
    }
    if (n == 2) {
        printf(" %d %d ", 1, 1);
        return;
    }
    printf(" %d %d ", 1, 1);

    for (int i = 2; i <= n - 1; i++) {
        if (i & 1) {
            printf("%d ", pow(3, odd ));
            odd++;

        } else {
            printf("%d ", pow(2, even));
            even++;
        }
    }
}

int main() {
    int n;
    printf(" Enter the number : ");
    scanf("%d", &n);
    print(n);
}