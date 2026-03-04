class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int totalSum = accumulate(arr.begin(), arr.end(), 0);
        int sum = 0;int maxScore = INT_MAX;int n = arr.size();
        k = n-k;
        for(int i = 0;i<k;i++){
            sum += arr[i];
        }
        maxScore = sum;
        for(int i = k;i<n;i++){
            sum += arr[i];
            sum -= arr[i-k];
            maxScore = min(maxScore,sum);
        }
        return totalSum-maxScore;
    }
};