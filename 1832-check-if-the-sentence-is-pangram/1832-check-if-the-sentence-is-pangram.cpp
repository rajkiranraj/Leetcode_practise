class Solution {
public:
    bool checkIfPangram(string s) {
        vector <int> freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        for(int i:freq){
            if(i==0) return false;
        }
        return true;
    }
};