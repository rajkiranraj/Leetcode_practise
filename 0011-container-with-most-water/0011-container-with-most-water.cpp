class Solution {
public:
    int maxArea(vector<int>& height) {
        int h = 0,w = 0,maxArea = 0,i = 0,j = height.size()-1;
        while(i<=j){
            h = min(height[i],height[j]);
            w = j-i;
            maxArea = max(maxArea,w*h);
            if(height[i]<=height[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxArea;
    }
};


// class Solution {
// public:
//     int maxArea(vector<int>& arr) {
//         int n = arr.size();int h = 0,w = 0,area = 0,maxArea = 0;
//         for(int i = 0;i < n; i++){
//             for(int j = i+1;j < n; j++){
//                 h = min(arr[i],arr[j]);
//                 w = j-i;
//                 area = w*h;
//                 maxArea = max(area,maxArea);
//             }
//         }
//         return maxArea;
//     }
// };