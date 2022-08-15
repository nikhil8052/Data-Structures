/*
  Find wheather duplicate character is present in the string or not ??

*/

#include <iostream>
#include <vector>

#define vi vector<int>
#define loop(n) for (int i = 0; i < n; i++)
#define print(arr) fori(arr.size()) { cout << arr[i] << " "; }
#define in(arr, n) loop(n) { cin >> arr[i]; }
#define ll long long int

using namespace std;

// Time complexity is O(n^2)
int checkDuplicates(string str) {
    for (int i = 0; i < str.length(); i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (str[j] == str[i]) return true;
        }
    }

    return false;
}

int main() {
    string str;
    cin >> str;
    if (checkDuplicates(str)) {
        cout << " Duplicates :  ";
        return 0;
    }
    cout << " not Duplicates : ";
    cout << "Done";
}