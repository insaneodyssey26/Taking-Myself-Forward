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


class Solution {
  public:
    bool isPrime(int n) {
        // code here
        if (n == 1) return false;
        if (n == 2) return true;
        int count = 0;
        for (int i = 1; i*i <= n; i++) {
            if (n % i == 0) {
                count++;
                if (n/i != i) {
                    count++;
                }
            }   
            
        }
        
        if (count > 2) return false;
        else return true;
    }
}; // Lot better way ... like O(sqrt(n))    

// gfg te solve kora egulo