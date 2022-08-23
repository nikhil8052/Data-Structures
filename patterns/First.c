
/*

Problem : Print the below pattern 


A
B A
C B A
D C B A
E D C B A
F E D C B A
G F E D C B A 




*/
#include <stdio.h>

void print(int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i; j >= 0; j--) {
            printf("%c ", j + 65);
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
}