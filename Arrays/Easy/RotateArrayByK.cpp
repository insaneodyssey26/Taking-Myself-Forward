class Solution {
  public:
    void rotateclockwise(vector<int>& arr, int k) {
        // code here
        int n = arr.size();  // size of the array
        k = k % n; // in case k is greater than n
        vector<int> temp(k); // temporary array to store last k elements
        for (int i = 0; i < k; i++) {  
            temp[i] = arr[n - k + i];
        } // this loop will store last k elements in temp array
        
        for (int i = n - k - 1; i >= 0; i--) {
            arr[i + k] = arr[i];  // this loop will shift the rest of the elements to right by k positions
        }
        for (int i = 0; i < k; i++) {
            arr[i] = temp[i];
        } // this loop will place the elements of temp array to first k positions of original array
    }
}; // Time complexity: O(n) 
  // Space complexity: O(k)
 