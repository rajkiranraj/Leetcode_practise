class Solution {
public:
    bool isAnagram(string s, string t) {
        // if(s.size()!=t.size()) return false;
        // sort(s.begin(),s.end());
        // sort(t.begin(),t.end());
        // return s==t;
        if(s.size()!=t.size()) return false;
        vector <int> sfreq_arr(26,0);
        // vector <int> tfreq_arr(26,0);
        
        for(char c: s){
            sfreq_arr[c-'a']++;
        }
        for(char c: t){
            sfreq_arr[c-'a']--;
        }
        for(int i: sfreq_arr){
            if(i!=0){
                return false;
            }
        }
        return true;
    }
};