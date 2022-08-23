/*

 Enter the number : 25
 Yes 

Enter the number : 21
 No

*/

#include <stdio.h>

int checkPerfectSquare(int n) {
    if (n == 0 || n == 1) return 0;
    
    int tem=(int)sqrt(n);
    if(tem*tem)
}

int main() {
    int n;
    printf(" Enter the number : ");
    scanf("%d", &n);
    checkPerfectSquare(n) ? printf(" Yes ") : printf(" No");
}