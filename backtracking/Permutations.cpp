/*

 Find thep permutations of a given string using backtracking.

 INPUT :- abc

 OUTPUT :-

 abc
 acb
 bac
 bca
 cab
 cba

*/

#include <iostream>
#include <string>

using namespace std;

// String subsquence (This logic will only work for unique chars in the string)
void permutation(string str, int j) {
    if (j == str.length() - 1) {
        cout << str << endl;
        return;
    }

    for (int i = j; i < str.length(); i++) {
        swap(str[i], str[j]);
        permutation(str, j + 1);
        swap(str[i], str[j]);
    }
}

int main() {
    // Start code from here
    string str;
    cin >> str;
    permutation(str, 0);
    cout << "Done";
}
