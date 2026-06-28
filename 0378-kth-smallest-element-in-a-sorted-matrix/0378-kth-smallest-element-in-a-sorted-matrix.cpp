class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        vector<int>a;
        for(auto i:matrix){
            for(auto j:i){
                a.push_back(j);
            }
        }
        sort(a.begin(),a.end());
        return a[k-1];
    }
};