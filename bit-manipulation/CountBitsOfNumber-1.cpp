#include <iostream>

using namespace std;

// Count the number of set bits of a number.
int countBits(int n) {
    int count = 0;
    while (n) {
        if (n & 1) count++;
        n =n>>1;
    }
    return count ;
}

// Code starts from here .
int main() {
    int n;
    cout << " Enter the Number. ";
    cin >> n;
    cout << countBits(n);
}