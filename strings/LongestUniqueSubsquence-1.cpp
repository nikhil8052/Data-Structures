/*

 Brute force approach for finding the longest unique subsquence from the string. 
*/

#include <iostream>
#include <vector>

#define vi vector<int>
#define loop(n) for (int i = 0; i < n; i++)
#define print(arr) \
    loop(arr.size()) { cout << arr[i] << " "; }
#define in(arr, n) \
    loop(n) { cin >> arr[i]; }
#define ll long long int

using namespace std;

// Time complexity is O(n)
int checkDuplicates(string str, int left, int right) {
    vi fre(26, 0);
    for (int i = left; i <= right; i++) {
        fre[str[i] - 'a']++;
        if (fre[str[i] - 'a'] > 1) return true;
    }

    return false;
}

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}
// Brute Force
int longestUniqueSubSquence(string str) {
    if (str.length() == 0) return 0;
    int curLen = 1, maxLen = 1;
    for (int i = 0; i < str.length(); i++) {
        for (int j = i + 1; j < str.length(); j++) {
            if (checkDuplicates(str, i, j) == true) {
                curLen = 1;
                break;
            } else {
                curLen++;
                maxLen = max(maxLen, curLen);
            }
            if(j==str.length()-1) return maxLen;
        }
    }
    return maxLen;
}
int main() {
    string str;
    cin >> str;
    cout << longestUniqueSubSquence(str);
        cout<<"Done";

}