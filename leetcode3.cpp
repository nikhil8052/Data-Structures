class Solution {
public:
    
    // Time complexity is O(n)
    int checkDuplicates(string str, int left, int right) {
        vector<int> fre(26, 0);
        for (int i = left; i <= right; i++) {
            fre[str[i] - 'a']++;
             if (fre[str[i] - 'a'] > 1) return true;
         }

        return false;
    }
    
    int lengthOfLongestSubstring(string s) {
        int len=s.length();
        if(len==0) return 0 ;
        if(len==1) return 1 ;
        int l=0,r=1,ans=1;
        
        while(r<len){
          
        }
        return ans ;
        
    }
};