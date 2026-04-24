class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n = nums.size();
        vector <int>res(n);
        for(int i = 0;i<nums.size();i++){
            res[i]=nums[nums[i]];
        }
        return res;
    }
};