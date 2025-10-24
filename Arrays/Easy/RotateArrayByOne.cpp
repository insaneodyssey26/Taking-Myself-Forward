class Solution {
  public:
    void rotate(vector<int> &arr) {
        // code here
        int n = arr.size();  // size of the array
        int last = arr[n - 1]; // store the last element
        for (int i = n - 2; i >= 0 ; i--) {
            // in above line, we are starting the loop from second last element...
            // because last element is already stored in 'last' variable, we will send it to first position after shifting all other elements to right by one position
            arr[i + 1] = arr[i]; // we are shifting elements to right by one position
        }
        arr[0] = last; // and here we are placing the last element to first position
    }
};