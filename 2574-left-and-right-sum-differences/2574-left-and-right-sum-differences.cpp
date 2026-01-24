class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {int n = nums.size();
        vector <int> lsum(n,0);lsum[0]=0;
        vector <int> rsum(n,0);rsum[n-1]=0;
        vector <int> ans(n,0);
        for(int i = 1;i<nums.size();i++){
           lsum[i]=lsum[i-1]+nums[i-1];
        }
        for(int i = nums.size()-2;i>=0;i--){
            rsum[i]=rsum[i+1]+nums[i+1];
        }
        for(int i = 0;i<n;i++){
            ans[i]=abs(lsum[i]-rsum[i]);
        }
        return ans;
    }
};