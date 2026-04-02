class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(),total = 0;
        vector<int> leftmax(n),rightmax(n);
        leftmax[0] = height[0];rightmax[n-1] = height[n-1];
        for(int i = 1;i<n;i++)
        leftmax[i] = max(leftmax[i-1],height[i]);
        for(int i = n-2;i>=0;i--)
        rightmax[i] = max(rightmax[i+1],height[i]);
        for(int i = 0;i < n; i++)
        total += min(leftmax[i],rightmax[i]) - height[i];
        return total;
    }
};


// class Solution {
// public:
//     int trap(vector<int>& height) {int n = height.size();
//         int total = 0;
//         for(int i = 0;i < n; i++){int leftmax = 0,rightmax = 0;
//             for(int j = 0;j <= i; j++) leftmax = max(leftmax,height[j]);
//             for(int j = i;j < n; j++)rightmax = max(rightmax,height[j]);
//             total += min(leftmax,rightmax) - height[i];
//         }
//         return total;
//     }
// };