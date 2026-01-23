class Solution {
public:
    void isString(string s,vector<char>& s1){
        for(char c: s){
            if(isalnum(c)){
                s1.push_back(c);
            }
            if(c=='#' && !(s1.empty())){
                s1.pop_back();
            }
        }
    }
    bool backspaceCompare(string s, string t) {
        vector <char> s1,s2;
        isString(s,s1);
        isString(t,s2);  
        return s1==s2;
    }
};