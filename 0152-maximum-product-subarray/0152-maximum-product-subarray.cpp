class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int crnt_product = 1;
        int max_product = INT_MIN;
        int prefix,suffix; suffix = prefix = 1;
        for(int i = 0;i<nums.size();i++){
            prefix *= nums[i];
            suffix *= nums[nums.size()-i-1];
            max_product = max(max_product,max(prefix,suffix));
            if(prefix == 0) prefix = 1;
            if(suffix == 0) suffix = 1;
        }
        return max_product;
    }
};