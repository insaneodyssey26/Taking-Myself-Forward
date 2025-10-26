// Leetcode 283

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();

        int position = 0;
        for (int i = 0; i < n; i++) {
            if (nums[i] != 0) {
                nums[position] = nums[i];
                position++;
            }
        }
        for (int i = position; i < n; i++) {
            nums[i] = 0;
        }
    }
}; // Two pointer method, in-place algorithm
   // Time complexity: O(n)
   // Space complexity: O(1)

