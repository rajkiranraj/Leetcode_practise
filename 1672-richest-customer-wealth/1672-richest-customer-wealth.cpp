class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int n = accounts.size();
        int arr1_size = accounts[0].size();
        int maxSum = 0;
        for(int i = 0;i<n;i++){
            int sum = 0;
            for(int j = 0;j<arr1_size;j++){
                sum += accounts[i][j];
            }
            maxSum = max(maxSum,sum);
        }
        return maxSum;
    }
};