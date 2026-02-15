class Solution {
public:
    void sortColors(vector<int>& arr) {
        //Brute force
        // sort(nums.begin(),nums.end());

        int low,mid,high;
        low = mid = 0;
         high = arr.size()-1;
        while(mid<=high){
            if(arr[mid] == 1) mid++;
            else if(arr[mid] == 0){
                swap(arr[mid++],arr[low++]);
            }
            else{
                swap(arr[high--],arr[mid]);
            }
        }
    }
};