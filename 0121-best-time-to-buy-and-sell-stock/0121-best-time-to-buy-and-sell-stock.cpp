class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector <int> bp(n,0);
        int maxi = 0;
        bp[0]=prices[0];
        for(int i = 1;i<n;i++){
            bp[i]=min(prices[i-1],bp[i-1]);
        }
        int mp = 0;
        for(int i = 0;i<n;i++){
            int ans = prices[i]-bp[i];
            maxi = max(maxi,ans);
        }
        return maxi;
    }
};