class Solution {
public:
    bool canConstruct(string r, string m) {
        // if(m.size()>r.size()) return false;
        vector <int> freq(26,0);
        for(char c:r){
            freq[c-'a']++;
        }
        for(char c:m){
            
            freq[c-'a']--;
        }
        for(int i:freq){
            if(i!=0 && i>0)return false;
            // cout<<i<<" ";
        }
        return true;
    }
};