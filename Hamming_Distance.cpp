class Solution {
public:
    int hammingDistance(int x, int y) {
        int xorVal = x ^ y;  // XOR will give bits that are different
        int distance = 0;
        
        // Count the number of set bits in xorVal
        while (xorVal > 0) {
            distance += xorVal & 1;  // Add the least significant bit
            xorVal >>= 1;            // Shift right by 1 bit
        }
        
        return distance;
    }
};
