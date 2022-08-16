/* 

  Optimized solutions is here .

*/
#include <iostream>
#include <vector>
#include <unordered_set>

#define vi vector<int>
#define loop(n) for (int i = 0; i < n; i++)
#define print(arr) loop(arr.size()) { cout << arr[i] << " "; }
#define in(arr, n) loop(n) { cin >> arr[i]; }
#define ll long long int

using namespace std;

int max(int a , int b ){
    if(a>b) return a ; 
    else return b ;
}

int longestUniqueSubSquence(string s) {
    int len=s.length();
    if(len==0 || len==1 ) return len ;

    int l=0,r=1,ans=1; 
    unordered_set<char> ss;
    ss.insert(s[l]);
     
    while(r<len){
         // Present
         if(ss.count(s[r])){
               ss.erase(s[l]);
               l++;
               continue ;
         }else{
            // Not Present 
            ss.insert(s[r]);
            ans=max(ans,r-l+1);
         }
        r++;
    }


    return ans ;
}
int main() {
    string str;
    cin >> str;
    cout << longestUniqueSubSquence(str);
}