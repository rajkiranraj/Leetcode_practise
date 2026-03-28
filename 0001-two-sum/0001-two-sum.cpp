class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map <int,int> m;
        for(int i = 0;i < n; i++){
            int to_find = target-nums[i];
            if(m.find(to_find)!=m.end()){
                return{i,m[to_find]};
            }
            m[nums[i]] = i;
        }
        return {};
    }
};