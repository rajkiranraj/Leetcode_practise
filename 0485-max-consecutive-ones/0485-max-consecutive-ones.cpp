class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int maxCount = 0;
        for(int i :nums){
            if(i==1){
                count++;
            }
            else if(i!=1){
                count=0;
            }
            maxCount = max(maxCount,count);
        }
        return maxCount;
    }
};