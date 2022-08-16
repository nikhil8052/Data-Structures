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

bool checkPalindrome(string s, int l, int r) {
    if (l < r) {
        if(s[l]!=s[r]) return false ;
        else return true ;
        checkPalindrome(s,l++,r--);    
    }

}

int main() {
    // Start code from here
    string str;
    cin >> str;
    cout << checkPalindrome(str,0,str.length()-1);
    cout << "Done";
}