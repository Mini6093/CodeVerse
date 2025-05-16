class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n + 1, 0);
        for (int i = 1; i <= n; ++i) {
            // The number of 1's in i is 1 + number of 1's in i with the lowest set bit removed
            ans[i] = ans[i & (i - 1)] + 1;
        }
        return ans;
    }
};
