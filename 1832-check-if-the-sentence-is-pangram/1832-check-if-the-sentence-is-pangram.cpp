class Solution {
public:
    bool checkIfPangram(string sentence) {
        //Optimal approach
        // vector <int> freq(26,0);
        // for(auto i: sentence){
        //     freq[i - 'a']++;
        // }
        // for(auto i: freq){
        //     if(i==0){
        //         return false;
        //     }
        // }
        // return true;

        //Best approach
        set <char> s;
        for(int i = 'a';i<='z';i++){
            s.insert(i);
        }
        for(auto c: sentence){
            s.erase(c);
        }
        if(s.empty()) return true;
        return false;
    }
};