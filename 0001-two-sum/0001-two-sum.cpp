class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector <pair<int,int>> v;
        for(int i = 0; i < n ; i++){
            v.push_back({nums[i],i});
        }
        int i = 0;int j = n-1;
        sort(v.begin(),v.end());
        while(i<j){
            int sum = v[i].first + v[j].first;
            if(sum == target) return {v[i].second,v[j].second};
            else if(sum > target) j--;
            else i++;
        }
        return {};
    }
};

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         int n = nums.size();
//         for(int i = 0;i < n; i++){
//             int crsum = nums[i];
//             int moreNeeded = target-crsum;
//             if(m.find()!=m.end()){
//                 return {}
//             }
//         }
//     }
// };

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//       int i = 0;int j = nums.size()-1;
//       sort(nums.begin(),nums.end());
//       while(i<j){
//         int sum = nums[i]+nums[j];
//         if(sum>target){

//         }
//         else{

//         }
//       }
//       return {i,j};
//     }
// };