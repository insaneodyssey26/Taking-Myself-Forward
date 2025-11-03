// LeetCode version
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0, digit = 0;
        for (int num: nums) {
            if(count == 0) {
                digit = num;
                count++;
            }
            else if(num == digit) {
                count++;
            }
            else {
                count--;
            }
        }
        return digit;
    }
};

// GeeksforGeeks version
class Solution {
  public:
    int majorityElement(vector<int>& arr) {
        // code here
        int count = 0, digit = 0;
        for (int num: arr) {
            if (count == 0) {
                digit = num; 
                count++;
            }
            else if (num == digit) {
                count++;
            }
            else {
                count--;
            }
        } // this whole loop finds a candidate for majority element
        count = 0;
        for (int num: arr) {
            if (num == digit) count++;
        }
        if (count > (arr.size() / 2)) {
            return digit;
        }
        else return -1;
    } // this loop verifies if the candidate is actually the majority element
};