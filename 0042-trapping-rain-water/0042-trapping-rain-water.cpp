class Solution {
public:
    int trap(vector<int>& height) {
      int n = height.size();
      int left = 0;
      int right = n-1;
      int leftMax = height[0];
      int rightMax = height[n-1];int total = 0;
      while(left<=right){
        if(height[left]<=height[right]){
            leftMax = max(leftMax,height[left]);
            total += leftMax - height[left];
            left++;
        }
        else{
            rightMax = max(rightMax,height[right]);
            total += rightMax - height[right];
            right--;
        }
      }
      return total;
    }
};