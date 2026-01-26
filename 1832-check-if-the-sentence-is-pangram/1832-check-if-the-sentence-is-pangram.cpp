class Solution {
public:
    void markfreq(char c,vector <int> &freq_arr){
        int i = 1;
        freq_arr[c-'a']=i++;
    }
    bool checkIfPangram(string sentence) {
        vector <int> freq_arr(26,0);
        for(char c: sentence){
            markfreq(c,freq_arr);
        }
        for(auto i: freq_arr){
            if(i==0){
                return false;
            }
        }
        return true;
    }
};