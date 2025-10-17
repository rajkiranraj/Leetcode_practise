class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();//size of the vector nums
        int maxSum = INT_MIN;//smalllest possible int for all test cases
        int crntSum = 0;//insitialising a var for storing the sum
        for(int i = 0;i<size;i++){
            crntSum += nums[i];//kadane's algorith with O(n)
            maxSum = max(crntSum,maxSum);
            if(crntSum < 0) crntSum = 0;
        }
        return maxSum;
    }
};