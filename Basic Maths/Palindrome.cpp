class Solution {
  public:
    bool isPalindrome(int n) {
        int last_digit = 0, reverse = 0, duplicate = n; 
        while (n > 0) {
            last_digit = n % 10;
            reverse = (reverse * 10) + last_digit;
            n = n / 10;
        }
        if (duplicate == reverse) return true; 
        else return false;
    }
};