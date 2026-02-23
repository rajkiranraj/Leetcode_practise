class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) { int n = nums.size();
        vector <int> ans(n,0); int posidx = 0,negidx = 1;
        for(int i = 0;i < n; i++){
            if(nums[i]<0){
                ans[negidx] = nums[i]; 
                negidx+=2;
            }
            else{
                ans[posidx] = nums[i];
                posidx+=2;
            }
        }
        return ans;
    }
};

//BRUTE_FORCE_SOL:
// class Solution {
// public:
//     vector<int> rearrangeArray(vector<int>& nums) {
//        vector<int> pos;
//         vector<int> neg;
//         for(int x : nums){
//             if(x >= 0)
//                 pos.push_back(x);
//             else
//                 neg.push_back(x);
//         }
//         vector<int> ans;int idx = 0,idx1 = 0;
//         for(int i = 0;i<nums.size();i++){
//             if(i%2==0) ans.push_back(pos[idx++]);
//             else ans.push_back(neg[idx1++]);
//         }

//         return ans; 
//     }
// };