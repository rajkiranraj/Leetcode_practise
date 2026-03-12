class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = strs[0];
        int n = strs.size();
        for(int i = 0;i < n; i++){
            while(strs[i].find(ans)!=0){
                ans.pop_back();
            }
            if(ans.empty()) return "";
        }
        return ans;
    }
};