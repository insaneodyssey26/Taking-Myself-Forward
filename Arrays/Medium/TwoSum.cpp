class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> finder; // a map to store number and its index
        for (int i = 0; i < nums.size(); i++) {
            int diff = target - nums[i];  // this variable stores the difference between target and current number
            if (finder.find(diff) != finder.end()) { // check if the difference exists in the map
                return {finder[diff], i}; // if found, return the indices
            }
            finder[nums[i]] = i; // if not found, store the current number and its index in the map
        }
        return {}; // return an empty vector if no solution is found
    }
};  
// Time Complexity: O(n) - We traverse the list containing n elements only once.
// Space Complexity: O(n) - The extra space required depends on the number of items stored