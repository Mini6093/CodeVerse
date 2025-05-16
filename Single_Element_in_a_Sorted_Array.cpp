class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int left = 0, right = nums.size() - 1;
        
        while (left < right) {
            int mid = left + (right - left) / 2;
            
            // Ensure mid is even for pairing check
            if (mid % 2 == 1) mid--;
            
            // If the pair is intact, single element is on the right
            if (nums[mid] == nums[mid + 1]) {
                left = mid + 2;
            } 
            // If the pair is broken, single element is on the left
            else {
                right = mid;
            }
        }
        
        // 'left' now points to the single element
        return nums[left];
    }
};
