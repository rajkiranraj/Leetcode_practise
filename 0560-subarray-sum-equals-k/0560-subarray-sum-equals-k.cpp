class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count = 0;
        unordered_map <int,int> m;
        int sum = 0;
        for(int i = 0;i<nums.size();i++){
            sum += nums[i];
            if(sum == k){
                count++;
            }
            int target = sum -k;
            if(m.find(target) != m.end()){
                count += m[target];
            }
            m[sum]++;
        }
        return count;
    }
};

// class Solution {
// public:
//     int subarraySum(vector<int>& nums, int k) {
//         int size = nums.size();int count = 0;
//         vector <int> prefixSum(size,0);
//         prefixSum[0] = nums[0];
//         for(int i = 1;i < size; i++){
//             prefixSum[i] = prefixSum[i-1] + nums[i];
//         }
//         unordered_map <int,int> m;
//         for(int j = 0;j < size; j++){
//             if(prefixSum[j] == k){
//                 count ++;
//             }
//             //subarraySum [i,j] = prefixSum[j] - prefixSum[j-1];
//             //at some point subarraySum should be equal to k then i.e
//             //k = prefixSum[j] - prefixSum[i-1] we have given already k and we have prefixSum[j]
//             //so we can change the formula as prefixSum[i-1] = prefixSum[j] - k;
//             //we can assume prefixSum[i-1] as a var something like val so 
//             int val = prefixSum[j] - k;
//             if(m.find(val) != m.end()){
//                 count += m[val]; 
//                 //we'll go to key->value pair of that i-1 i.e val and extract the vale for that key & add to count variable 
//             }
//             //we'll store prefixSum of j in the map for future searching 
//             m[prefixSum[j]]++;
//         }
//         return count;
//     }
// };