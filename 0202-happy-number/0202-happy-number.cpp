class Solution {
public:
    // Helper function to calculate the sum of squares of digits
    int getNext(int n) {
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d * d;
            n /= 10;
        }
        return sum;
    }

    bool isHappy(int n) {
        int slow = n;
        int fast = getNext(n);
        
        // Loop until fast reaches 1 (happy) or a cycle is detected
        while (fast != 1 && slow != fast) {
            slow = getNext(slow);           // Move 1 step
            fast = getNext(getNext(fast));  // Move 2 steps
        }
        
        return fast == 1;
    }
};
