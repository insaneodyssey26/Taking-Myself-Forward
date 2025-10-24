// Leetcode version

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int unique = 0;
        for (int i = 1; i < nums.size(); i++) {
             if (nums[i] != nums[unique]) {
                unique++;
                nums[unique] = nums[i];
            }
        }
        return unique + 1;
    }
};

// GeeksforGeeks version

class Solution {
  public:
    // Function to remove duplicates from the given array.
    vector<int> removeDuplicates(vector<int> &arr) {
        // code here
        int unique = 0;
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] != arr[unique]) {
                unique++;
                arr[unique] = arr[i];
            }
        }
        return vector<int> (arr.begin(), arr.begin() + unique + 1);
    }
};