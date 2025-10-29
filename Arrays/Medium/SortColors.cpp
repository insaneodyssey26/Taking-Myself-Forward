class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0, mid = 0, high = nums.size()-1;
        while(mid <= high){
            if(nums[mid] == 0){
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } // If the current element is 0, swap it with the element at the 'low' pointer and move both pointers forward.
            else if(nums[mid] == 1){
                mid++;
            } // If the current element is 1, just move the 'mid' pointer forward.
            else{
                swap(nums[mid], nums[high]);
                high--;
            } // If the current element is 2, swap it with the element at the 'high' pointer and move the 'high' pointer backward.
        }
    }
};

// This algorithm is called the Dutch National Flag algorithm.
// It is used to sort an array containing three distinct values (in this case, 0s, 1s, and 2s) in a single pass with constant space complexity.