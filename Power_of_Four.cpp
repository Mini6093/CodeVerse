class Solution {
public:
    bool isPowerOfFour(int n) {
        // Condition 1: n must be positive
        // Condition 2: n must be a power of 2 (only one bit set)
        // Condition 3: The single set bit must be in an even position (0-based from right)
        
        return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555) != 0;
    }
};
