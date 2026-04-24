class Solution {
public:
    bool isPalindrome(int x) {
        long long dup = x;
         if(x<0){
            return 0;
        }
        long long rev = 0;
       
        while(x!=0){
            long long digit = x%10;
            rev=rev*10+digit;
            x/=10;
        }
        if(dup==rev)return 1;
        return 0;
    }
};