class Solution {
public:
    int reverse(int x) {
        
        // Use a wider type to detect overflow while reversing.
        // The final result must fit in a 32-bit signed integer (INT_MIN..INT_MAX).
        long long int rev = 0;

        // Extract digits one by one from the input number x.
        // For negative numbers, x%10 yields a negative digit in C++ (e.g., -123 % 10 == -3),
        // which is fine because rev accumulates the sign along with the digits.
        while(x!=0){
            int k = x%10;       // Get the last digit
            rev = rev*10+k;     // Append digit to the reversed number
            x/=10;              // Remove the last digit from x
        }

        // If the reversed value doesn't fit in a 32-bit signed int, return 0 as required.
        // We used long long to perform the reversal safely and detect overflow here.
        if (rev > INT_MAX || rev < INT_MIN) {
            return 0;
        }

        return rev; // Implicit conversion to int is safe after the overflow check.
    }
};
