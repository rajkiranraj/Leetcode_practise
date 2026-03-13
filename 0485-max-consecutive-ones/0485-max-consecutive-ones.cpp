class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0,maxcount = 0;
        int n = nums.size();
        for(int i = 0;i < n; i++){
            if(nums[i]==1)count++;
            maxcount = max(maxcount,count);
            if(nums[i]!=1) count = 0;
        }
        return maxcount;
    }
};