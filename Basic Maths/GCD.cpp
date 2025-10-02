class Solution {
  public:
    int gcd(int a, int b) {
        // code here
        int minimum = min(a,b);
        int gcd = 1;
        for (int i = minimum; i >= 1 ; i--) {
            if (a % i == 0 && b % i == 0) {
                gcd = i;
                break;
            }
        }
        return gcd;
    }
}; // we can calculate gcd like this... but we can see that it's shit again for big values of a, b
// but still better than classic loop condition... we are performing the loop from reverse direction, so it's lil better