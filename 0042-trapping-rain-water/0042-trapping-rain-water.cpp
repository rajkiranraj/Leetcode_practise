class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();//size of the array 
        int left = 1;//left ptr 
        int right = n - 1;//right ptr 
        int leftMax = height[0];//left max
        int rightMax = height[n - 1];//right max
        int totalWater = 0;//total water 
//two pointer approach 
        while (left <= right) {
            //consider using the left ptr if left<=right for correct lmax 
            if (leftMax <= rightMax) {
                totalWater += max(0, leftMax - height[left]);//cal total water from left max and the current ith index
                leftMax = max(leftMax, height[left]);//update max every step 
                left++;//move towards left 
            } else {
                totalWater += max(0, rightMax - height[right]);
                rightMax = max(rightMax, height[right]);
                right--;
            }
        }
        return totalWater;
    }
};
