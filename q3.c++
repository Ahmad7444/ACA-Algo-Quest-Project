class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ans=0;
        int i=0,j=-1;
        int n=s.length();
        unordered_set<char> str;

  
        while(j!=n-1){
            if (str.find(s[j+1])==str.end()){
                str.insert(s[++j]);
            
                
            }
            else{
                ans=(ans>j-i+1)?(ans):(j-i+1);
                do{
                    str.erase(s[i++]);
                    
                    
                }while(s[j+1]!=s[i-1]);
            }
        }
        ans=(ans>j-i+1)?(ans):(j-i+1);
        return ans;
    }
};