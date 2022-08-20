/*

 https://leetcode.com/problems/unique-morse-code-words/
*/

#include <iostream>
#include <vector>
#include<unordered_set>

#define vi vector<int>
#define loop(n) for (int i = 0; i < n; i++)
#define print(arr)  loop(arr.size()) { cout << arr[i] << " "; }
#define in(arr, n) loop(n) { cin >> arr[i]; }
#define ll long long int

using namespace std;

int uniqueMorseRepresentations(vector<string>& words ) {
    vector<string> m{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
    unordered_set<string> uniques;
    for(int w=0; w<words.size();w++){
        string oneword=words[w];
        string code="";
        for(int i=0; i<oneword.length();i++){
              code+=m[oneword[i]-'a'];
        }
        uniques.insert(code);
    }
    return uniques.size();
}

int main() {
    // Start code from here
    vector<string> w{"gin","zen","gig","msg"};
    cout<<uniqueMorseRepresentations(w);
}