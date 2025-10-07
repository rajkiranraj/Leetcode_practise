class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();//size of the vector
        vector <int> lmax(n,0);//vector for storing lmax value
        vector <int> rmax(n,0);//vector for storing rmax value
        lmax[0] = height[0];//intialise the first element as 0 least height is 0
        rmax[n-1] = height[n-1];//intialise the last element as same as line 7 filing from right side so last element should be 0
        for(int i = 1;i<n;i++){
            lmax[i] = max(lmax[i-1],height[i]);
        }
        for(int i = n-2;i>=0;i--){
            rmax[i] = max(rmax[i+1],height[i]);
        }
        int waterTrapped = 0;
        for(int i = 0;i<n;i++){
            waterTrapped += min(lmax[i],rmax[i])-height[i];
        }
        return waterTrapped;
    }
};