class Solution {
public:
    void buildString(string s,stack <char> &st){
        for(int i = 0;i<s.size();i++){
            if(s[i]!='#'){
                st.push(s[i]);
            }
            else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }
    }
    bool backspaceCompare(string s, string t) {
        stack <char> st;
        stack <char> st1;
        buildString(s,st);
        buildString(t,st1);
        return st==st1;
    }
};