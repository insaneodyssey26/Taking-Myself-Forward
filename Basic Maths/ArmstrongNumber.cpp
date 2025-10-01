class Solution {
  public:
    bool armstrongNumber(int n) {
        int count = 0, sum = 0, temp = n, last_digit = 0;
        while (temp > 0) {
            count++;
            temp /= 10;
        }
        
        temp = n;
        while (temp > 0) {
            last_digit = temp % 10;
            sum += pow(last_digit, count);
            temp /= 10;
        }
        return sum == n;
    }
};