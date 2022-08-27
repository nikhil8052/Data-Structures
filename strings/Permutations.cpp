/*

PROBLEM :- Find the permutations of the String.
NOTE:-ALL the chars are unique in the string. 


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
#include <vector>

using namespace std;

// String subsquence (This logic will only work for unique chars in the string)
void permutation(string str, string osf) {
    if (str.length() == 0) {
        cout << osf << endl;
        return;
    }

    for (int i = 0; i < str.length(); i++) {
        char ch = str[i];
        string ros = str.substr(0, i) + str.substr(i + 1);
        permutation(ros, osf + ch);
    }
}

int main() {
    // Start code from here
    string str;
    cin >> str;
    permutation(str, " ");
    cout << "Done";
}

