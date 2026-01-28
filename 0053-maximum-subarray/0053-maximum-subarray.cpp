class Solution {
public:
    int maxSubArray(vector<int>& arr) {
        int n = arr.size();
        int sum = 0;int msum = INT_MIN;
        for(int i = 0;i<n;i++){
            sum = sum + arr[i];
            msum = max(sum,msum);
            if(sum<0){
                sum=0;
            }
        }
        return msum;
    }
};