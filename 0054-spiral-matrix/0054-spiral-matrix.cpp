class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
    int left,right,top,bottom;
    top = left = 0;
    right = matrix[0].size()-1;
    bottom = matrix.size()-1;
    vector <int> resultant_vector;
    while(left<=right && top<=bottom){
        for(int i = left;i<=right;i++){
            resultant_vector.push_back(matrix[top][i]);
        }
        top++;
        for(int j = top;j<=bottom;j++){
            resultant_vector.push_back(matrix[j][right]);
        }
        right--;
        if( top<=bottom){
        for(int k = right;k>=left;k--){
            resultant_vector.push_back(matrix[bottom][k]);
        }
        bottom--;
        }
        if(left<=right){
        for(int l = bottom;l>=top;l--){
            resultant_vector.push_back(matrix[l][left]);
        }
        left++;
        }
    }
    return resultant_vector;
    }
};