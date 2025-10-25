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
 

// A better method to solve this question

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;
        int st = 0, end = n - 1;
        while (st < end) {
            swap (nums[st], nums[end]);
            st++;
            end--;
        } // In this loop we reverse the entire array, so last elements comes to front
        st = 0, end = k - 1;
        while (st < end) {
            swap (nums[st], nums[end]);
            st++;
            end--;
        } // In this loop we reverse the first k elements, so they are in correct order
        st = k, end = n - 1;
        while (st < end) {
            swap (nums[st], nums[end]);
            st++;
            end--;
        } // In this loop we reverse the remaining n-k elements, so they are in correct order
    }
}; // Time complexity = O(n)
    // Space complexity = O(1)
    // This method is better as it uses constant space, time complexity remains same