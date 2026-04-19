class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        int k = n-1, i = 0, j = n-1;
        while(i <= j){
            int lsquare = nums[i]*nums[i];
            int rqsuare = nums[j]*nums[j];
            if(lsquare>rqsuare){
                res[k--] = lsquare;i++;
            }
            else{
                res[k--] = rqsuare;j--;
            }
        }
        return res;
    }
};