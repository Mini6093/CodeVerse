class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        // Sort the array to pair smallest numbers together
        sort(nums.begin(), nums.end());
        
        int maxSum = 0;
        
        // Sum every alternate element (smallest in each pair)
        for (int i = 0; i < nums.size(); i += 2) {
            maxSum += nums[i];
        }
        
        return maxSum;
    }
};
