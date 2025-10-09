class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(); // Size of the vector
        vector<int> lmax(n, 0); // Vector for storing the maximum height to the left of each bar
        vector<int> rmax(n, 0); // Vector for storing the maximum height to the right of each bar
        lmax[0] = height[0]; // Initialize the first element; the maximum height to the left is the bar itself
        rmax[n - 1] = height[n - 1]; // Initialize the last element; the maximum height to the right is the bar itself
        
        // Calculate the maximum height to the left for each bar
        for (int i = 1; i < n; i++) {
            lmax[i] = max(lmax[i - 1], height[i]);
        }
        
        // Calculate the maximum height to the right for each bar
        for (int i = n - 2; i >= 0; i--) {
            rmax[i] = max(rmax[i + 1], height[i]);
        }
        
        int waterTrapped = 0; //  calculating the total amount of water trapped
        
        // Calculate the water trapped above each bar
        for (int i = 0; i < n; ++i) {
            waterTrapped += max(0,min(lmax[i], rmax[i]) - height[i]);
        }
        
        return waterTrapped;
    }
};