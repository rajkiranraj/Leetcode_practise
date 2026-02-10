class Solution {
public:
    bool checkIfPangram(string s) {
        vector <bool> freq(26,false);
        for(char c:s){
            freq[c-'a']=true;
        }
        for(int i:freq){
            if(i!=true)return false;
        }
        return true;
    }
};