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

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int start = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                swap(nums[i], nums[start]); 
                start++; 
            }
        }        
    }
}; // Another two pointer method, in-place algorithm, this uses swap function
   // Time complexity: O(n)
   // Space complexity: O(1)
   // This method does less write operations than the previous one, so it is better in that sense
// Both methods are valid and efficient for moving zeroes to the end of the array
