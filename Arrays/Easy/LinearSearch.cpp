class Solution {
  public:
    int search(vector<int>& arr, int x) {
        // code here
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x) return i;
        }
        return -1;
    }
}; // Nothing fancy, just a simple linear search through the array