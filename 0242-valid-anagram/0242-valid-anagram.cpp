class Solution {
public:
    bool isAnagram(string s, string t) {
        //Brute force approach
        if(s.size()!=t.size()) return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;

        //freq arr optimal
        vector <int> freq(26,0);
        for(char c:s){
            freq[c-'a']++;
        }
        for(char c:t){
            freq[c-'a']--;
        }
        for(int i:freq){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
};