class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int st = 0, end = nums.size() - 1;
        while (st < end) {
            int mid = (st + end) / 2;
            if (nums[mid] > nums[mid + 1]) end = mid; // if mid is greater than next element, then peak lies on left side (including mid)
            else st = mid + 1; // else peak lies on right side
        }
        return st;
    }
};