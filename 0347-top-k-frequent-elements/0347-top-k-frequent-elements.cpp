class Solution {
public:
    vector<int> topKFrequent(vector<int>& arr, int k) {
        unordered_map<int, int> m;
        vector<pair<int,int>> freq;
        vector<int> ans;

        // Count frequency
        for(int x : arr){
            m[x]++;
        }

        // Store as {frequency, element}
        for(auto i : m){
            freq.push_back({i.second, i.first});
        }

        // Sort descending by frequency
        sort(freq.rbegin(), freq.rend());

        // Take first k elements
        for(int i = 0; i < k; i++){
            ans.push_back(freq[i].second);
        }

        return ans;
    }
};