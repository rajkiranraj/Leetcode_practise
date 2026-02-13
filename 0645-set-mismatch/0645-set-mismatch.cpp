class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        unordered_map <int,int> m;
        for(int i = 0;i<n;i++){
            m[nums[i]]++;
        }
        int dup = -1;
        for(auto &it:m){
            if(it.second>1) dup = it.first;
        }
        int asum = n*(n+1)/2;
        int csum = 0;
        for(auto &[key,value]:m){
            csum+=key;
        }
        return {dup,asum-csum};
    }
};