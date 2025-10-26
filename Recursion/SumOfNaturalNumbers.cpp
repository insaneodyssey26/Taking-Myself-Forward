class Solution {
  public:
    int findSum(int n) {
        // code here
        if (n < 1) return 0;
        else return n + findSum(n - 1);
    }
};
