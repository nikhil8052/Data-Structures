/**
 * @file LongestCommonPrefix.cpp
 * 
 * Problem Link :- https://leetcode.com/problems/longest-common-prefix/
 *
 *  
 * Example :- 
 * 
 *      Input: strs = ["flower","flow","flight"]
        Output: "fl"

 */
#include <iostream>
#include <vector>

using namespace std;

//Function of longest comman prefix.
string longestCommonPrefix(vector<string>& strs) {
    string ans = "";

    if (strs[0].length() == 0) return ans;

    bool found = true;
    int ch = 0;
    while (ch < strs[0].length()) {
        char cur = strs[0][ch];
        for (int i = 0; i < strs.size(); i++) {
            if (strs[i][ch] && strs[i][ch] == cur) {
                continue;
            } else {
                found = false;
                break;
            }
        }
        if (found == false) break;
        if (found == true) ans += cur;
        ch++;
    }

    return ans;
}

int main() {

    int n ; 
    cin>>n ;
    vector<string> strs(n);
    for(int i=0 ; i<n ;i++) cin>>strs[i];
    cout<<longestCommonPrefix(strs);
    cout<<"Status:Done";
}
