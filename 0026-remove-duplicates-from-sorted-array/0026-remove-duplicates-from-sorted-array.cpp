//BRUTE - FORCE - SOLUTION
// class Solution {
// public:
//     int removeDuplicates(vector<int>& nums) {
//         set <int> s;
//         for(int i: nums) s.insert(i);
//         int n = s.size();
//         int index = 0;
//         for(auto i: s){
//             nums[index++] = i;
//         }
//         return n;
//     }
// };

//OPTIMAL - APPROACH
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {int n = nums.size();
       int i = 0;
       int j = i+1;
       while(j<n){
        if(nums[i]!=nums[j]){
            nums[i+1]=nums[j];
            i++;j++;
        }
        else{
            j++;
        }
       }
       return i+1;
    }
};