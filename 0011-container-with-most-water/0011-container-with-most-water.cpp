class Solution {
public:
    int maxArea(vector<int>& arr) {
        int i = 0,j = arr.size()-1;int maxArea= 0,area = 0;
        while(i <= j){
            int h = min(arr[i],arr[j]);
            int w = j-i;
            area = w*h;
            maxArea = max(area,maxArea);
            if(arr[i]<=arr[j]){
                i++;
            }
            else{
                j--;
            }
        }
        return maxArea;
    }
};