class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        
        int st = 0, end = nums.size() - 1;
        while (st <= end) {
            int mid = (st + end) / 2;
            if (nums[mid] == target) {
                result[0] = mid;
                end = mid - 1; 
            } 
            else if (nums[mid] < target)
                st = mid + 1;
            else
                end = mid - 1;
        }  // this loop finds the first occurrence of target
        
        st = 0, end = nums.size() - 1;
        while (st <= end) {
            int mid = (st + end) / 2;
            if (nums[mid] == target) {
                result[1] = mid;
                st = mid + 1; 
            } 
            else if (nums[mid] < target)
                st = mid + 1;
            else
                end = mid - 1;
        } // this loop finds the last occurrence of target
        return result;
    }
};
