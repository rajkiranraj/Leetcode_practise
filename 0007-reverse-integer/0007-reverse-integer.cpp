class Solution {
public:
    int reverse(int x) {
        
        long long int rev = 0;
        while(x!=0){
            int k = x%10;
            rev = rev*10+k;
            x/=10;
        }
        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }
        return rev;
    }
};