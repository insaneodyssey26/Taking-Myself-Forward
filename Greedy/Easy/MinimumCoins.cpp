class Solution {
  public:
    int findMin(int n) {
        // code here
        vector<int> coins = {10, 5, 2, 1};
        int count = 0;
        for (int i = 0 ; i < coins.size(); i++) {
            if (n == 0) break;
            count += n / coins[i];
            n = n % coins[i];
        }
        return count;
    }
};