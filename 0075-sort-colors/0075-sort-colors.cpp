class Solution {
public:
    void sortColors(vector<int>& arr) {
        int low,mid,high;
    high = arr.size()-1;
    low = mid = 0;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            mid++;
            low++;
        }
        else if(arr[mid]==1){
            mid++;
        }
        else{
            swap(arr[high],arr[mid]);
            high--;
        }
    }
    }
};