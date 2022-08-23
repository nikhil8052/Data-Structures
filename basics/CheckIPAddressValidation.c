#include <stdio.h>

// Check lenght of a string
int len(char ip[]) {
    int i = 0;
    while (ip[i]) i++;
    return i;
}
// Check IP validation
int check(char *ip) {
    char *delimeter = strtok(ip, ".");
    int value = atoi(delimeter);

    if (value < 0 || value > 256) return 0;
    while (delimeter) {
        delimeter = strtok(NULL,".");
        value = atoi(delimeter);
        if (value < 0 || value > 256) return 0;
    }
    return 1 ; 
}

int main() {
    char ip[16] = {0};

    printf(" Enter the IP Address : ");
    scanf("%s", &ip);

    check(ip) ? printf(" Valid IP Address.")
              : printf("Opps!, IP is not valid.");
}