
/*
  Find longest palindrome string.

  LINK:- https://leetcode.com/problems/longest-palindromic-substring/


  This is the Brute Force Approach for solving this question; 
  
*/

#include <iostream>
#include <vector>

#define vi vector<int>
#define loop(n) for (int i = 0; i < n; i++)
#define print(arr) loop(arr.size()) { cout << arr[i] << " "; }
#define in(arr, n) loop(n) { cin >> arr[i]; }
#define ll long long int

using namespace std;

bool checkPalindrome(string s, int l, int r) {
    while (l < r) {
        if (s[l] != s[r]) return false;
        l++, r--;
    }
    return true;
}

int max(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

// Brute Force
int ml = 0, mr = 0, maximum = -1;
bool findLongestPalindrome(string s) {
    if (s.length() == 0 || s.length() == 1) cout << s;

    for (int i = 0; i < s.length() - 1; i++) {
        for (int j = i + 1; j < s.length(); j++) {
            if (checkPalindrome(s, i, j)) {
                int cur_len = j - i + 1;
                if (cur_len > maximum) {
                    ml = i;
                    mr = j;
                }
                maximum = max(maximum, cur_len);
            }
        }
    }

    for (int i = ml; i <= mr; i++) cout << s[i];
}

int main() {
    // Start code from here
    string str;
    cin >> str;
    findLongestPalindrome(str);
    cout<<"Done";
}