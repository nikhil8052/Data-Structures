/*
   Acode Problem Link :- https://www.spoj.com/problems/ACODE/ 

*/


#include <iostream>
#include<string>
using namespace std;

int acode(string &str, int i) {
    if (i == 0) return 1;
    int ans = 0;
    if (str[i] == '0') return 0;
    if((str[i-1]-'0'*10 + str[i]-'0')<=26){
        ans+=acode(str , i-1);
    }
    return ans += acode(str, i - 1);
}

int main() {

    string str ; 
    cin>>str ; 
    int ans = acode(str,str.size());
    cout<<ans ; 
    cout<<" Not Done ";
}