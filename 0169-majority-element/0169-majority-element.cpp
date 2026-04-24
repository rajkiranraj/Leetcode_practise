
// MOORE'S VOTING ALGORITHM
// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         int n = nums.size();
//         int element = -1;
//         int count = 0;
//         for (int i = 0; i < n; i++) {
//             if (count == 0) {
//                 count = 1;
//                 element = nums[i];
//             } else if (element == nums[i])
//                 count++;
//             else
//                 count--;
//             // //if the element always exists then no need to use this loop
//             // int cnt = 0;
//             // for(int i :nums){
//             //     if(i==element) cnt++;
//             // }
//             // if(cnt > n/2) return el;
//         }
//         return element;
//     }
// };

// BRUTE - FORCE - ALGORITH
 class Solution {
 public:
     int majorityElement(vector<int>& nums) {
         unordered_map<int,int> m;
         int mjCheck = nums.size()/2;
         for(int i = 0;i<nums.size();i++){
             m[nums[i]]++;
             if(m[nums[i]]>mjCheck){
                return nums[i];
             }
         }
         return 0;
     }
 };