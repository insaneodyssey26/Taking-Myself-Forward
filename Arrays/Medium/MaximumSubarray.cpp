class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currSum = nums[0], maxSum = nums[0]; // Initialize with the first element
        for (int i = 1; i < nums.size(); i++) {
            currSum = max(nums[i], currSum + nums[i]); // this
            maxSum = max(maxSum, currSum);
        }
        return maxSum;
    }
};

// This is also Kadane's Algorithm, but implemented slightly differently
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxSum = nums[0];
        int currSum = 0;
        for (int num : nums) {
            currSum += num; // add the current number to currSum
            maxSum = max(maxSum, currSum); // update maxSum if currSum is greater
            if (currSum < 0) // reset currSum if it becomes negative
                currSum = 0; // because a negative sum will decrease the sum of any future subarray
        }
        return maxSum;
    }
};
