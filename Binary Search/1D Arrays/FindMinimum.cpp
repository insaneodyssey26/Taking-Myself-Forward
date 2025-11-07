class Solution {
public:
    int findMin(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;
        while (st < end) {
            int mid = (st + end) / 2;
            if (nums[mid] <= nums[end]) {
                end = mid;
            }
            else {
                st = mid + 1;
            }
        }
        return nums[st];   
    }
};

// how are we even coming to this solution? how to think about it?
// we can compare the middle element with the end element to decide which half to search next.
// if the middle element is less than or equal to the end element, then the minimum element is in the left half (including mid).
// otherwise, the minimum element is in the right half
// if nums[mid] <= nums[end], it means the right half is sorted, so the minimum must be in the left half
// else, the left half is sorted, so the minimum must be in the right half