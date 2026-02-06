class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int j = 0;
        for(int i = 0;i<arr.size();i++){
           if(arr[i]!=0){
            swap(arr[j],arr[i]);
            j++;
           }
        }
    }
};


// BRUTE - FORCE - SOLUTION;
// class Solution {
// public:
//     void moveZeroes(vector<int>& arr) {int n = arr.size();
//         int index = 0;
//         for(int i = 0;i<arr.size();i++){
//             if(arr[i]!=0){
//                 arr[index++]=arr[i];
//             }
//         }
//         while(index<n){
//             arr[index++]=0;
//         }
//     }
// };