class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> s;
        for(int i:nums) s.insert(i);
        int index = 0;
        for(int i:s){
            nums[index++] = i;
        }
        return s.size();
    }
};