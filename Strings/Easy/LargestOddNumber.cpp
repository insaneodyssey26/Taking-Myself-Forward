class Solution {
public:
    string largestOddNumber(string num) {
        for (int i = num.length(); i >= 0; i--) { // start from the end
            if ((num[i] - '0') % 2 == 1) { // check if the digit is odd
                return num.substr(0, i + 1); // return the substring from the start to the current index
            }
        }
        return "";
    }
};

// example: 
// Input: num = "52607"
// Output: "52607"
// reason is that the last digit '7' is odd, so the largest odd number is the entire string.