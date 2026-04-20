class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // If the array has 2 or fewer elements, they are all valid
        if (nums.size() <= 2) {
            return nums.size();
        }
        
        // Start pointer 'i' at 2, as the first two elements are always kept
        int i = 2; 
        
        // Fast pointer 'j' also starts at 2
        for (int j = 2; j < nums.size(); j++) {
            // Check if the current element is different from the element two steps back
            if (nums[j] != nums[i - 2]) {
                nums[i] = nums[j]; // Keep the element
                i++;               // Move the slow pointer
            }
        }
        
        // 'i' represents the length of the new valid subarray
        return i;
    }
};
