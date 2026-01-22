class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        // sort approach
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s == t;

        //counting frequency using arr
        // vector <int> freq(26,0);
        // for(char c:s){
        //     freq[c-'a']++;
        // }
        // for(char c:t){
        //     freq[c-'a']--;
        // }
        // for(int i:freq){
        //     if(i!=0){
        //     return false;
        //     }
        // }
        // return true;
    }
};