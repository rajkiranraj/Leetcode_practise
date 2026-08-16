class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int> m;
        for(int i:nums){
            m[i]++;
        } 
        int maxifreq = 0,maxielem = 0,sum = 0;
        for(auto i:m){
            if(i.second > maxifreq){
                maxifreq = i.second;
                sum = i.second;
            }
            else if(i.second == maxifreq){
                sum += i.second;
            }
        }
        if(maxifreq==1){
            return  nums.size();
        }
        return sum;
    }
};