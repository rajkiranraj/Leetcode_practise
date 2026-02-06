class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int j = 0;
        int n = arr.size();

        for(int i = 0; i < n; i++){
            if(arr[i] != 0){
                if(i != j){   // correct condition
                    swap(arr[i], arr[j]);
                }
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