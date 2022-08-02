#include <iostream>
#include <vector>

using namespace std;

// Check Nuber is even or not 
bool isEven(int num) {
    if ((num & 1) == 0)
        return true;
    else
        return false;
}

// Count even and odds 
void countEvenAndOdd(vector<int> &arr, int size) {
    int evens = 0;
    int odds = 0;
    for (int i = 0; i < size; i++) {
        if (isEven(arr[i]))
            evens++;
        else
            odds++;
    }

    cout << " Even Numbers are " << evens<<endl;
    cout << " Odd Numbers are " << odds;
}

// Code starts from here 
int main() {
    int n;
    cout << " Enter the Array Size. ";
    cin >> n;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];
    countEvenAndOdd(arr, n);
}