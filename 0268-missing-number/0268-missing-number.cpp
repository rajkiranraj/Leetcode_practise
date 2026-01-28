class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // int n = nums.size();
        // int asum = (n*(n+1))/2;
        // int s = 0;
        // for(auto i:nums)
        // s+=i;
        // int mnumber = abs(s-asum);
        // return mnumber;

        int ans=0;
         for(int i = 1;i<=nums.size();i++){
        ans^=i;
       }
        for(int i = 0;i<nums.size();i++){
            ans^=nums[i];
        }
      

        return ans;
    }
};