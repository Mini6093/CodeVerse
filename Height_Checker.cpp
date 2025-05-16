class Solution {
public:
    int heightChecker(vector<int>& heights) {
        // Create a sorted copy of the heights array
        vector<int> expected = heights;
        sort(expected.begin(), expected.end());
        
        int count = 0;
        
        // Count the mismatched indices
        for (int i = 0; i < heights.size(); ++i) {
            if (heights[i] != expected[i]) {
                count++;
            }
        }
        
        return count;
    }
};
