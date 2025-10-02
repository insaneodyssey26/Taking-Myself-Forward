class Solution {
  public:
    bool isPrime(int n) {
        if (n < 2) return false;
        int count = 0;
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                count++;
            }
        }
        if (count > 2) return false; 
        else return true;
    }
}; // Inefficient, very inefficient ... what if the number is too large... this is shit af method
