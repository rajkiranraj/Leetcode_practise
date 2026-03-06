class Solution {
public:
    bool rotateString(string s, string goal) {
        int n = s.size();
        if(s.size()!=goal.size()) return false;
        return (s+s).find(goal)!=string::npos;
    }
};


// class Solution {
// public:
//     bool rotateString(string s, string goal) {
//         int n = s.size();
//         if(s.size()!=goal.size()) return false;
//         for(int i = 0;i<n;i++){
//             rotate(s.begin(),s.begin()+1,s.end());
//             if(s==goal) return true;
//         }
//         return false;
//     }
// };