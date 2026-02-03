class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set <int> s;
        for(int i: nums) s.insert(i);
        int n = s.size();
        int index = 0;
        for(auto i: s){
            nums[index++] = i;
        }
        return n;
    }
};