class Solution {
public:
    int search(vector<int>& nums, int target) {
        int st = 0, end = nums.size() - 1;
        while (st <= end) {
            int mid = (st + end) / 2;
            if (nums[mid] == target) return mid;
            if (nums[st] <= nums[mid]) {  // when left part is sorted
                if (target >= nums[st] && target < nums[mid]) { // target lies in left part
                    end = mid - 1; // if target is in left part, search in left part
                }
                else {
                    st = mid + 1; // else search in right part
                }
            }
            if (nums[end] >= nums[mid]) { // when right part is sorted
                    if (target > nums[mid] && target <= nums[end]) {  // target lies in right part
                        st = mid + 1; // if target is in right part, search in right part
                    }
                    else {
                        end = mid - 1; // else search in left part
                    }
                }
        }
        return -1; // target not found
    }
};