class Solution {
public:
    bool checkIfPangram(string sentence) {
        vector <int> freq_arr(26,0);
        for(char i: sentence){
            freq_arr[i-'a']=1;
        }
        for(auto i: freq_arr){
            if(i==0) return false;
        }
        return true;
    }
};