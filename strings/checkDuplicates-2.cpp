/*
  Find wheather duplicate character is present in the string or not ??

*/

#include <iostream>
#include <vector>

#define vi vector<int>
#define loop(n) for(int i = 0; i < n; i++)
#define print(arr) loop(arr.size()) { cout << arr[i] << " "; }
#define in(arr, n) loop(n) { cin >> arr[i]; }
#define ll long long int

using namespace std;

// Time complexity is O(n)
int checkDuplicates(string str) {
    vi fre(26,0);
    for (int i = 0; i < str.length(); i++) {
        fre[str[i]-'a']++;
        if(fre[str[i]-'a']>1) return true ;
        
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
    cout<<"Done";
}