class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector <int>> res;
        sort(nums.begin(), nums.end());
        int n = nums.size();int i = 0;
        for(int i = 0;i < n-2; i++){
            int j = i+1, k = n-1;
            if(i > 0 && nums[i]==nums[i-1])continue;
            while(j < k){
                int sum = nums[i]+nums[j]+nums[k];
                if(sum == 0){
                    res.push_back({nums[i],nums[j],nums[k]});
                    //so dont do j++ and k++ blindly if j == j+1 and k==k-1
                    //we would end up having duplicate triplets 
                    while(j < k && nums[j] == nums[j+1]) j++;
                    while(j < k && nums[k] == nums[k-1]) k--;
                    j++;k--;
                }
                else if(sum > 0){//if sum is greater than zero then decrase the sum by 
            k--;//by moving tothe next-highest value from sorted array by decreasing k
                }else{
                    j++;
                }
            }
        }
        return res;
    }
};

// class Solution {
// public:
//     vector<vector<int>> threeSum(vector<int>& arr) {
//         vector<vector<int>> ans;
//         set<vector <int>> s;
//         int n = arr.size();
//         int i = 0,j = i+1,k = j+1;
//         for(int i = 0;i < n-2; i++){
//             for(int j = i+1;j < n-1; j++){
//                 for(int k = j+1;k<n;k++){
//                     if(arr[i]+arr[j]+arr[k]==0){
//                          vector<int> temp = {arr[i], arr[j], arr[k]};
//                         sort(temp.begin(), temp.end());  // IMPORTANT
//                         s.insert(temp);             
//                     }
//                 }
//             }
//         }
//         return vector<vector<int>>(s.begin(),s.end());
//     }
// };