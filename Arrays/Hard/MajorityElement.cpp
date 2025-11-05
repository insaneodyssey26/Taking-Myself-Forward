class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int digit1 = -1, digit2 = -1, count1 = 0, count2 = 0;  // four variables to store two digits and their counts
        for (int num: nums) {
            if (num == digit1) count1++; // increment count1 if num matches digit1
            else if (num == digit2) count2++; // increment count2 if num matches digit2
            else if (count1 == 0) {
                digit1 = num;
                count1++;
            } // assign new digit1 if count1 is 0
            else if (count2 == 0) {
                digit2 = num;
                count2++;
            } // assign new digit2 if count2 is 0
            else {
                count1--, count2--;
            } // decrement both counts if num doesn't match both digits
        }
        count1 = 0, count2 = 0;
        for (int num: nums) { // verify the counts of digit1 and digit2
            if (num == digit1) count1++;
            else if (num == digit2) count2++;
        }
        vector<int> ans; 
        if (count1 > (nums.size() / 3)) ans.push_back(digit1); // check if digit1 is appearing more than n/3 times
        if (count2 > (nums.size() / 3)) ans.push_back(digit2); // check if digit2 is appearing more than n/3 times
        return ans;
    }
};