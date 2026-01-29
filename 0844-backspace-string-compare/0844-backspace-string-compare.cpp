class Solution {
public:
    stack<char> buildString(string s){
        stack <char> st;
        int count = 0;
        for(auto c: s){
            if(c!='#') st.push(c);
            else{
                if(!st.empty()){
                    st.pop();
                }
            }
        }
    return st;
    }
    bool backspaceCompare(string s, string t) {
    return buildString(s)==buildString(t);
    }
};