/*
   Find the first unique char in the string and return the index of that .
*/
#include <iostream>
#include <vector>
#define vi vector<int>
#define loop(n) for (int i = 0; i < n; i++)
#define print(arr) loop(arr.size()) { cout << arr[i] << " "; }
#define in(arr, n) loop(n) { cin >> arr[i]; }
#define ll long long int

using namespace std;

int findIndex(string s) {
    vector<int> fre(26, 0);
    for (int i = 0; i<s.length(); i++) {
        fre[s[i]-'a']++;
    }

    for (int i = 0; i<s.length(); i++) {
        if (fre[s[i]-'a'] == 1) {
            return i;
        }
    }
    return -1;
}


int main() {
    // Start code from here
    string str;
    cin >> str;
    cout << findIndex(str);
}